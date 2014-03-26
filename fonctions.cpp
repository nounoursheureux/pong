#include <SFML/Graphics.hpp>
using namespace sf;
<<<<<<< HEAD
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
=======
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
>>>>>>> 3e17115840fdf5d7408f612ce3dd66e2213eb8e6
}
