#include "Game.h"
#include "Gamestate.h"
#include <SDL/SDL.h>
#include <iostream>
#include <cstdlib>

using namespace std;
using namespace Pepper;

Game::Game(){
	bool running;
	SDL_Surface* Surf_Display; 
}

int Game::Execute(){
	if ((Surf_Display = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == 0){
		cerr << "Unable to set video mode. " << SDL_GetError() << endl;
		SDL_Quit();
		exit(1);
	}
	running = true;
	while(running){
		Gamestates.top()->getInput();
		Gamestates.top()->doLogic();
		Gamestates.top()->Render();
	}
	return 0;
}

Game::~Game(){
	SDL_Quit();
}
