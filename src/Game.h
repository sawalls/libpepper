#ifndef GAME_H
#define GAME_H

#include <SDL/SDL.h>
#include <stack>

namespace Pepper
{

// Forward declaration
class Gamestate;

class Game
{
private:
	bool running;
	SDL_Surface* Surf_Display; 
	std::stack<Gamestate*> Gamestates;
public:
	Game();
	virtual int Execute();
	virtual ~Game();
};	//Game

};	//Pepper

#endif
