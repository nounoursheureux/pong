#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class Ball {
	public : 
		Ball();
		void MoveX();
		void MoveY();
		void ReverseX();
		void ReverseY();
		int speedX;
		int speedY;
		FloatRect returnPos();
		RectangleShape returnBalle();
	private :
		int taille;
		RectangleShape balle;
		FloatRect posBalle;
};

class Terrain {
	public : 
		Terrain();
		FloatRect* returnMurs();
	private :
		RectangleShape murG;
		RectangleShape murD;
		RectangleShape murH;
		RectangleShape murB;
		FloatRect posMurG;
		FloatRect posMurD;
		FloatRect posMurH;
		FloatRect posMurB;
		FloatRect murs[4];
};
