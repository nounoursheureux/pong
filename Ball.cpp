#include <SFML/Graphics.hpp>
using namespace sf;
#include "Ball.hpp"
#include "fonctions.hpp"

Ball::Ball() {
	speedX = 2;
	speedY = 3;
	vitesse = 2;
	balle = RectangleShape(Vector2f(10, 10));
	balle.setOrigin(5, 5);
	balle.setPosition(320, 240);
}

void Ball::MoveX() {
	balle.move(speedX, 0);	
}

void Ball::MoveY() {
	balle.move(0, speedY);
}

void Ball::ReverseX() {
	speedX *= -1;
}

void Ball::ReverseY() {
	speedY *= -1;
}

