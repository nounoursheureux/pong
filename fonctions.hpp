#include <SFML/Graphics.hpp>
using namespace sf;

class Ball {
	public : 
		Ball();
		void MoveX();
		void MoveY();
		void ReverseX();
		void ReverseY();
		RectangleShape returnSprite();
		RectangleShape balle;
	private :
		int taille;
		int speedX;
		int speedY;
		int vitesse;
};
