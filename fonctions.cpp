#include <SFML/Graphics.hpp>
using namespace sf;
#include "fonctions.hpp"
#include "Ball.hpp"
#include "Terrain.hpp"

int checkCollision(Ball ball, Terrain terrain) {
	if (ball.posBalle.intersects(terrain.posMurG)) 
		ball.ReverseX();
	if (ball.posBalle.intersects(terrain.posMurD))
		ball.ReverseX();
	if (ball.posBalle.intersects(terrain.posMurH) || ball.posBalle.intersects(terrain.posMurB))
		ball.ReverseY();
}
