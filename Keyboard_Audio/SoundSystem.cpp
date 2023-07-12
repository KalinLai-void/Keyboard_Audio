#include "SoundSystem.h"

SoundSystem::SoundSystem()
{
    //pin_ptr<FMOD::System*> pSystem = &system;
    if (FMOD::System_Create(&system) != FMOD_OK)
    {
        // Report Error
        return;
    }

    int driverCount = 0;
    system->getNumDrivers(&driverCount);

    if (driverCount == 0)
    {
        // Report Error
        return;
    }

    // Initialize our Instance with 36 Channels
    system->init(36, FMOD_INIT_NORMAL, NULL);
}

void SoundSystem::CreateSound(FMOD::Sound** sound, const char* file)
{
    system->createSound(file, FMOD_DEFAULT, 0, sound);
}

void SoundSystem::PlayingSound(FMOD::Sound* sound, bool isLoop)
{
    if (!isLoop)
        sound->setMode(FMOD_LOOP_OFF);
    else
    {
        sound->setMode(FMOD_LOOP_NORMAL);
        sound->setLoopCount(-1);
    }

    system->playSound(sound, NULL, false, 0);
}

void SoundSystem::ReleaseSound(FMOD::Sound* sound)
{
    sound->release();
}