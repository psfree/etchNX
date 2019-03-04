// Includes
#include <iostream>
#include <string>
#include <vector>

// Custom Headers
#include "UI.hpp"

// SWITCH STUFF

#include <switch.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

// Main function

int main(int argc, char** argv)
{

	UI start;

	while(appletMainLoop()) {
		hidScanInput();

		u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);

		if(kDown & KEY_B) break;

	}

	return 0;

}
