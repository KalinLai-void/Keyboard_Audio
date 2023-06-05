#ifndef IS_DEFINED_AUDIO
#define IS_DEFINED_AUDIO

#include "portaudio.h"
#include "sndfile.h"
#include <iostream>
#include <math.h>

#define NUM_SECONDS   (5)
#define SAMPLE_RATE   (44100)
#define FRAMES_PER_BUFFER  (64)

typedef struct
{
    float* bufferOfSndfile;
    SF_INFO sfinfo;
    int frameIndex;
}
paTestData;

class Audio
{
public:
    Audio(const char* audioFile);

private:
    PaStream* stream;
    paTestData data;
    PaError err;

    int numsSec;
    const char* audioPath;

public:
    int Setup(const char* audioFile);
    int Play();
    int End();
};

#endif // !IS_DEFINED_AUDIO
