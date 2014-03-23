pong : main.o fonctions.o
	g++ -o pong main.o fonctions.o -lsfml-system -lsfml-graphics -lsfml-window -Wall

fonctions.o : fonctions.cpp fonctions.hpp
	g++ -o fonctions.o -c fonctions.cpp  -lsfml-system -lsfml-graphics -lsfml-window -Wall

main.o : main.cpp fonctions.hpp
	g++ -o main.o -c main.cpp -lsfml-system -lsfml-graphics -lsfml-window -Wall

