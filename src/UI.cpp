#include "UI.hpp"
#include "SDL2/SDL.h"

using namespace std;

UI::UI()
{

	SDL_Init(SDL_INIT_EVERYTHING);

	// Define our window and renderer
	window = SDL_CreateWindow("etchNX", 100, 100, 1280, 720, 0);
	renderer = SDL_CreateRenderer(window, -1, 0);


	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);

}

UI::~UI()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}
