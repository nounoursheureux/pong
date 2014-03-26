CFLAGS = -g -Wall -Wshadow
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
