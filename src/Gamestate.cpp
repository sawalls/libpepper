#include "Gamestate.h"
#include <SDL/SDL.h>
#include <vector>

using namespace std;

Gamestate::Gamestate(){
}

void Gamestate::getInput(){
}

void Gamestate::doLogic(){
	vector<Entity>::iterator logicIterator;
	for(logicIterator = Ents.begin(); logicIterator != Ents.end(); logicIterator++){
		logicIterator->DoLogic();
	}

}

void Gamestate::Render(){
	vector<Entity>::iterator renderIterator;
	for(renderIterator = Ents.begin(); renderIterator != Ents.end(); renderIterator++){
		renderIterator->Render();
	}
}

Gamestate::~Gamestate(){
}
