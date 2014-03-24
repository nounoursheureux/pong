#include <SFML/Graphics.hpp>
using namespace sf;

class Ball {
	public : 
		Ball();
		void MoveX();
		void MoveY();
		void ReverseX();
		void ReverseY();
		void checkCollision();
		RectangleShape balle;
		FloatRect posBalle;
		friend int checkCollision();
	private :
		int taille;
		int speedX;
		int speedY;
		int vitesse;
};
