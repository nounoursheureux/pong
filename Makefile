pong : main.o Ball.o
	g++ -o pong main.o Ball.o -lsfml-system -lsfml-graphics -lsfml-window -Wall -Wshadow

Ball.o : Ball.cpp Ball.hpp
	g++ -o Ball.o -c Ball.cpp  -lsfml-system -lsfml-graphics -lsfml-window -Wall -Wshadow

main.o : main.cpp Ball.hpp
	g++ -o main.o -c main.cpp -lsfml-system -lsfml-graphics -lsfml-window -Wall -Wshadow

