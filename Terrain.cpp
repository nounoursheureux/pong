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
	murB.setPosition(0,478);
	murs[0] = murG.getGlobalBounds();
	murs[1] = murD.getGlobalBounds();
	murs[2] = murH.getGlobalBounds();
	murs[3] = murB.getGlobalBounds();
	scoreJ1 = 0;
	scoreJ2 = 0;
}

FloatRect* Terrain::returnMurs() {
	return murs;
}

int Terrain::getScoreJ1() {
	return scoreJ1;
}

int Terrain::getScoreJ2() {
	return scoreJ2;
}

void Terrain::incJ1() {
	++scoreJ1;
}

void Terrain::incJ2() {
	++scoreJ2;
}
