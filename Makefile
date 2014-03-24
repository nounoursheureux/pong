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
