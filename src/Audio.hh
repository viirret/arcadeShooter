#ifndef AUDIO_HH
#define AUDIO_HH

#include "raylib.h"
#include <string>
#include <vector>
#include "Global.hh"
#include "Settings.hh"

class Audio
{
	public:
		Audio();
		~Audio();
		void playSound(std::string name);
	private:
		std::vector<std::string> soundFiles;
		std::vector<Sound> sounds;
};

#endif
