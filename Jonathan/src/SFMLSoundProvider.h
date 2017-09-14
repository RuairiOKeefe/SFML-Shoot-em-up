#pragma once
#include "IAudioProvider.h"
#include "SoundFileCache.h"

class SFMLSoundProvider : public IAudioProvider
{
public:

	SFMLSoundProvider();

	void PlaySound(std::string filename);
	void PlaySong(std::string filename, bool looping = false);
	void StopAllSounds();

	bool IsSoundPlaying();
	bool IsSongPlaying();

private:
	static const int MAX_SOUND_CHANNELS = 10;

	SoundFileCache _soundFileCache;
	sf::Sound   _currentSounds[MAX_SOUND_CHANNELS];
	std::string _currentSongName;
};