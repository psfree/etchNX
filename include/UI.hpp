#ifndef UI_HPP
#define UI_HPP
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL2_gfxPrimitives.h>
#include <switch.h>

class UI {

public:
	void drawBrush();
	void erase();
	void updatePosition(u64 kHeld);
	UI();
	~UI();
private:
	int xpos;
	int ypos;
	SDL_Window *window;
	SDL_Renderer *renderer;
};


#endif
