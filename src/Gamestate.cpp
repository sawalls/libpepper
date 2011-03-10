#include "Gamestate.h"

Gamestate::Gamestate(){
}

virtual void Gamestate::getInput(){
	vector<Entities>::iterator inputIterator;
	for(inputIterator = Ents.begin(); inputIterator != Ents.end(); inputIterator++){
		inputIterator->DoLogic();
	}

}

virtual void Gamestate::doLogic(){
	vector<Entities>::iterator logicIterator;
	for(logicIterator = Ents.begin(); logicIterator != Ents.end(); logicIterator++){
		logicIterator->DoLogic();
	}

}

virtual void Gamestate::Render(){
	vector<Entities>::iterator renderIterator;
	for(renderIterator = Ents.begin(); renderIterator != Ents.end(); renderIterator++){
		renderIterator->DoLogic();
	}

}

Gamestate::~gamestate{

}
