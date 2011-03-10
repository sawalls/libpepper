#include "Game.h"
#include <stdlib>

using namespace std;

Game::Game(){
	bool running;
	SDL_Surface* Surf_Display; 
}

int Game::Execute(){
	if((Surf_Display = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == 0){
		cerr << "Unable to set video mode. " << SDL_GetError() << endl;
		SDL_Quit();
		exit(1);
	}
	running = true;
	while(running){
		Gamestacks.top().getInput();
		Gamestacks.top().doLogic();
		Gamestacks.top().Render();
	}
	return 0;
}

Game::~Game(){
	SDL_Quit();
}
