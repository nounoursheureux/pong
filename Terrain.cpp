#include <SFML/Graphics.hpp>
using namespace sf;
#include "Terrain.hpp"
#include "fonctions.hpp"

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
}
