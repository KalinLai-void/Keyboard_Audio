#define _CRT_SECURE_NO_WARNINGS

#include "Audio.h"

static int patestCallback( const void *inputBuffer, void *outputBuffer,
                            unsigned long framesPerBuffer,
                            const PaStreamCallbackTimeInfo* timeInfo,
                            PaStreamCallbackFlags statusFlags,
                            void *userData )
{
    paTestData *data = (paTestData*)userData;
    float* rptr = &data->bufferOfSndfile[data->frameIndex * data->sfinfo.channels]; // read buffer continuely
    float *wptr = (float*)outputBuffer;
    unsigned long i;
    int finished;
    unsigned int framesLeft = data->sfinfo.frames - data->frameIndex;

    (void) timeInfo; /* Prevent unused variable warnings. */
    (void) statusFlags;
    (void) inputBuffer;

    if (framesLeft < framesPerBuffer) /* final buffer... */
    {
        for (i = 0; i < framesLeft; i++)
        {
            *wptr++ = *rptr++;  /* left */
            if (data->sfinfo.channels == 2) *wptr++ = *rptr++;  /* right */
        }
        for (; i < framesPerBuffer; i++)
        {
            *wptr++ = 0;  /* left */
            if (data->sfinfo.channels == 2) *wptr++ = 0;  /* right */
        }
        data->frameIndex += framesLeft;
        finished = paComplete;
    }
    else
    {
        for (i = 0; i < framesPerBuffer; i++)
        {
            *wptr++ = *rptr++;  /* left */
            if (data->sfinfo.channels == 2) *wptr++ = *rptr++;  /* right */
        }
        data->frameIndex += framesPerBuffer;
        finished = paContinue;
    }
    
    return finished;
}

/*******************************************************************/
Audio::Audio(const char* audioFile)
{
    audioPath = audioFile;
    Setup(audioFile);
}

int Audio::Setup(const char* audioFile)
{
    PaStreamParameters outputParameters;
    int i;

    SNDFILE* infile = NULL;
    memset(&data.sfinfo, 0, sizeof(data.sfinfo));
    infile = sf_open(audioFile, SFM_READ, &data.sfinfo);

    /* read sound file */
    data.bufferOfSndfile = (float*)malloc(data.sfinfo.frames * data.sfinfo.channels * sizeof(float));
    sf_read_float(infile, data.bufferOfSndfile, data.sfinfo.frames * data.sfinfo.channels);
    sf_close(infile);

    data.frameIndex = 0;
    numsSec = data.sfinfo.frames / data.sfinfo.samplerate; // get file's seconds

    err = Pa_Initialize();
    if( err != paNoError ) goto error;

    outputParameters.device = Pa_GetDefaultOutputDevice(); /* default output device */
    if (outputParameters.device == paNoDevice) goto error;

    outputParameters.channelCount = data.sfinfo.channels;       /* stereo output */
    outputParameters.sampleFormat = paFloat32;
    outputParameters.suggestedLatency = Pa_GetDeviceInfo( outputParameters.device )->defaultLowOutputLatency;
    outputParameters.hostApiSpecificStreamInfo = NULL;

    err = Pa_OpenStream(
              &stream,
              NULL, /* no input */
              &outputParameters,
              data.sfinfo.samplerate,
              FRAMES_PER_BUFFER,
              paClipOff,      /* we won't output out of range samples so don't bother clipping them */
              patestCallback,
              &data );
    if( err != paNoError ) goto error;

    return err;
error:
    Pa_Terminate();
    return err;
}

int Audio::Play()
{
    err = Pa_StartStream(stream);
    if (err != paNoError) goto error;

    Pa_Sleep(numsSec * 1000);

    return err;
error:
    Pa_Terminate();
    return err;
}

int Audio::End()
{
    err = Pa_StopStream(stream);
    if (err != paNoError) goto error;

    err = Pa_CloseStream(stream);
    if (err != paNoError) goto error;

    Pa_Terminate();

    free(data.bufferOfSndfile);
    return err;
error:
    Pa_Terminate();
    return err;
}