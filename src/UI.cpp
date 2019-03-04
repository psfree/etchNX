#include "UI.hpp"
#include "SDL2/SDL.h"

using namespace std;

UI::UI()
{

	xpos = 640;
	ypos = 360;
	
	SDL_Init(SDL_INIT_EVERYTHING);

	// Define our window and renderer
	window = SDL_CreateWindow("etchNX", 100, 100, 1280, 720, 0);
	renderer = SDL_CreateRenderer(window, -1, 0);


	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);

}

void UI::erase() {
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}

void UI::drawBrush() {
	filledCircleRGBA(renderer, xpos, ypos, 10, 0,0,0, 255);
	SDL_RenderPresent(renderer);
}

void UI::updatePosition(u64 kHeld) {
	if(kHeld & KEY_LSTICK_LEFT) {
		
	}
	else if(kHeld & KEY_LSTICK_RIGHT) {
			
	}
	
	if(kHeld & KEY_LSTICK_UP) {
		
	}
	else if(kHeld & KEY_LSTICK_DOWN) {
		
	}
}

UI::~UI()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}
