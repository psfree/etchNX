#ifndef UI_HPP
#define UI_HPP
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include <switch.h>

class UI {

public:
	UI();
	~UI();
private:

	SDL_Window *window;
	SDL_Renderer *renderer;
};


#endif
