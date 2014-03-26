#include <SFML/Graphics.hpp>
using namespace sf;
#include <iostream>
#include "Classes.hpp"

Ball::Ball() {
	speedX = 2;
	speedY = 3;
	balle = RectangleShape(Vector2f(10, 10));
	balle.setOrigin(5, 5);
	balle.setPosition(320, 240);
	posBalle = balle.getGlobalBounds();
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
	balle.setPosition(0,0);
}

FloatRect Ball::returnPos() {
	posBalle = balle.getGlobalBounds();
	return posBalle;
}

RectangleShape Ball::returnBalle() {
	return balle;
}

void Ball::checkCollision() {
	Terrain terrain;
	FloatRect* murs = terrain.returnMurs();
	if (posBalle.intersects(murs[0])) 
		this->ReverseX();
	if (posBalle.intersects(murs[1]))
		this->ReverseX();
	if (posBalle.intersects(murs[2]) || posBalle.intersects(murs[3]))
		this->ReverseY();
}
