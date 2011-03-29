GAEMU : main.o Game.o Gamestate.o Entity.o
	g++ -lSDL -o GAEMU main.o Game.o Gamestate.o Entity.o
main.o : main.cpp Game.h
	g++ -c main.cpp 
Game.o : Game.cpp Game.h Gamestate.h
	g++ -c Game.cpp
Gamestate.o : Gamestate.cpp Gamestate.h Entity.h
	g++ -c Gamestate.cpp
Entity.o : Entity.cpp Entity.h
	g++ -c Entity.cpp
clean:
	rm GAEMU main.o Game.o Gamestate.o Entity.o
