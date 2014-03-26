#include <SFML/Graphics.hpp>
using namespace sf;
#include "Classes.hpp"

Terrain::Terrain() {
	murG = RectangleShape(Vector2f(1, 480));
	murD = RectangleShape(Vector2f(1, 480));
	murH = RectangleShape(Vector2f(640, 1));
	murB = RectangleShape(Vector2f(640, 1));
	murG.setPosition(0,0);
	murD.setPosition(639,0);
	murH.setPosition(0,0);
	murB.setPosition(0,479);
	posMurG = murG.getGlobalBounds();
	posMurD = murD.getGlobalBounds();
	posMurH = murH.getGlobalBounds();
	posMurB = murB.getGlobalBounds();
	murs[0] = posMurG;
	murs[1] = posMurD;
	murs[2] = posMurH;
	murs[3] = posMurB;
}

FloatRect* Terrain::returnMurs() {
	return murs;
}
