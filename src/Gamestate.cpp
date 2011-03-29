#include "Gamestate.h"
#include "Entity.h"
#include <algorithm>
#include <functional>

using namespace std;
using namespace Pepper;

Gamestate::Gamestate(){
}

void Gamestate::getInput(){
}

void Gamestate::doLogic()
{
	for_each(entities.begin(), entities.end(), mem_fun(&Entity::DoLogic));
}

void Gamestate::Render()
{
	for_each(entities.begin(), entities.end(), mem_fun(&Entity::Render));
}

Gamestate::~Gamestate(){
}
