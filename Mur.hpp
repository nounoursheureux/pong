#include <SFML/Graphics.hpp>
using namespace sf;

class Terrain {
	public : 
		Terrain();
	private :
		RectangleShape murG;
		RectangleShape murD;
		RectangleShape murH;
		RectangleShape murB;
		FloatRect posMurG;
		FloatRect posMurD;
		FloatRect posMurH;
		FloatRect posMurB;
}
