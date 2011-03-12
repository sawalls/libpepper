#include "Gamestate.h"
#include <SDL/SDL.h>
#include <stack> //Is this the right statement?

class Game{
private:

public:
	bool running;
	SDL_Surface* Surf_Display; 
	std::stack<Gamestate> Gamestates;
public:
	Game();
	int Execute();
	~Game();
	

};
