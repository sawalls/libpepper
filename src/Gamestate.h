#include <SDL/SDL.h>
#include <vector>
#include "Entity.h"

#ifndef GAMESTATE_H
#define GAMESTATE_H
class Gamestate{
	public:
	std::vector<Entity> Ents; //This should contain all the stuff we want to do logic on
	public:
	Gamestate();
	virtual void getInput();
	virtual void doLogic();
	virtual void Render();
	virtual ~Gamestate();
};
#endif
