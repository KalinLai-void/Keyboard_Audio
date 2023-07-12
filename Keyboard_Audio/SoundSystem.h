#pragma once

#include <iostream>
#include "fmod.hpp"

class SoundSystem
{
	FMOD::System* system;

public:
	SoundSystem();

	void CreateSound(FMOD::Sound** sound, const char* file);
	void PlayingSound(FMOD::Sound* sound, bool isLoop);
	void ReleaseSound(FMOD::Sound* sound);
};