#include <SFML/Graphics.hpp>
using namespace sf;
#include "fonctions.hpp"

class Terrain {
	public : 
		Terrain();
		friend int checkCollision(Ball, Terrain);
	private :
		RectangleShape murG;
		RectangleShape murD;
		RectangleShape murH;
		RectangleShape murB;
		FloatRect posMurG;
		FloatRect posMurD;
		FloatRect posMurH;
		FloatRect posMurB;
};
