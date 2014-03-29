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
		int checkCollision(FloatRect);
		FloatRect returnPos();
		RectangleShape returnBalle();
		void engagement();
	private :
		int taille;
		RectangleShape balle;
		FloatRect posBalle;
};

class Terrain {
	public : 
		Terrain();
		FloatRect* returnMurs();
		int getScoreJ1();
		int getScoreJ2();
		void incJ1();
		void incJ2();
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
		int scoreJ1;
		int scoreJ2;
};
