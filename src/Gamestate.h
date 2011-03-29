#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <SDL/SDL.h>
#include <vector>

namespace Pepper
{

// Forward declaration
class Entity;

class Gamestate
{
private:
	std::vector<Entity*> entities;
public:
	Gamestate();
	virtual void getInput();
	virtual void doLogic();
	virtual void Render();
	virtual ~Gamestate();
}; //class Gamestate

}; //namespace Pepper

#endif
