#include <SFML/Graphics.hpp>
using namespace sf;
#include "fonctions.hpp"

class Ball {
	public : 
		Ball();
		friend int checkCollision(Ball, Terrain);
		void MoveX();
		void MoveY();
		void ReverseX();
		void ReverseY();
	private :
		int taille;
		int speedX;
		int speedY;
		int vitesse;
		RectangleShape balle;
		FloatRect posBalle;
};
