PROGS=main
MAIN_OBJS=main.o Game.o Gamestate.o Entity.o
CXXFLAGS+=-O3
LDFLAGS+=-lSDL

all: ${PROGS}

main: ${MAIN_OBJS}
	$(CXX) $(LDFLAGS) $^ -o $@

main.o: Game.h

Game.o: Game.h Gamestate.h

Gamestate.o: Gamestate.h Entity.h

Entity.o: Entity.h

clean:
	rm ${PROGS} ${MAIN_OBJS}
