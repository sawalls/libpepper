#include <SDL/SDLl.h>
#include <vector>

class Gamestate{
	private:
	
	public:
	vector<Entities> Ents //This should contain all the stuff we want to do logic on
	public:
	Gamestate();
	virtual void getInput();
	virtual void doLogic();
	virtual void Render();
	~Gamestate();

};
