#include <SFML/Graphics.hpp>
using namespace sf;
#include "Classes.hpp"
#include <iostream>

int checkCollision(Ball ball, Terrain terrain) {
	FloatRect posBalle = ball.returnPos();
	FloatRect* murs = terrain.returnMurs();
	if (posBalle.intersects(murs[0])) 
		return 1;
	if (posBalle.intersects(murs[1]))
		return 1;
	if (posBalle.intersects(murs[2]) || posBalle.intersects(murs[3]))
		return 2;
	else 
		return 0; 
}
