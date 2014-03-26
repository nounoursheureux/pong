<<<<<<< HEAD
CFLAGS = -Wall -Wshadow
LOADLIBES = -lsfml-system -lsfml-graphics -lsfml-window 

all : pong

pong : main.o Ball.o Terrain.o fonctions.o
	g++ -o pong main.o Ball.o Terrain.o fonctions.o $(LOADLIBES) $(CFLAGS)

main.o : main.cpp Ball.o Terrain.o fonctions.o 
	g++ -o main.o -c main.cpp $(LOADLIBES) $(CFLAGS)

Ball.o : Ball.cpp Classes.hpp
	g++ -o Ball.o -c Ball.cpp $(LOADLIBES) $(CFLAGS)

Terrain.o : Terrain.cpp Classes.hpp 
	g++ -o Terrain.o -c Terrain.cpp $(LOADLIBES) $(CFLAGS)

fonctions.o : fonctions.cpp Ball.o Terrain.o fonctions.hpp
	g++ -o fonctions.o -c fonctions.cpp $(LOADLIBES) $(CFLAGS)
=======
pong : main.o Ball.o fonctions.o
	g++ -o pong main.o Ball.o -lsfml-system -lsfml-graphics -lsfml-window -Wall -Wshadow

Ball.o : Ball.cpp Ball.hpp fonctions.o 
	g++ -o Ball.o -c Ball.cpp  -lsfml-system -lsfml-graphics -lsfml-window -Wall -Wshadow

main.o : main.cpp Ball.hpp fonctions.o 
	g++ -o main.o -c main.cpp -lsfml-system -lsfml-graphics -lsfml-window -Wall -Wshadow

Terrain.o : Terrain.cpp Terrain.hpp fonctions.o 
	g++ -o Terrain.o -c Terrain.cpp -lsfml-system -lsfml-graphics -lsfml-window -Wall -Wshadow

fonctions.o : fonctions.cpp fonctions.hpp
	g++ -o fonctions.o -c fonctions.cpp -lsfml-system -lsfml-graphics -lsfml-window -Wall -Wshadow
>>>>>>> 3e17115840fdf5d7408f612ce3dd66e2213eb8e6
