#include <SDL/SDL.h>

#include <stack> //Is this the right statement?

class Game{
private:

public:
	bool running;
	SDL_Surface* Surf_Display; 
	stack<Gamestate> Gamestates;
public:
	Game();
	int Execute();
	

};
