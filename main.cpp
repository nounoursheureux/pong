#include <SFML/Graphics.hpp>
using namespace sf;
<<<<<<< HEAD
#include "Classes.hpp"
#include "fonctions.hpp"
#include <iostream>
=======
#include "Ball.hpp"
#include "Terrain.hpp"
#include "fonctions.hpp"
>>>>>>> 3e17115840fdf5d7408f612ce3dd66e2213eb8e6

int main(int argc, const char *argv[])
{
	RenderWindow app(VideoMode(640, 480, 32), "Mon jeu de Pong", Style::Resize | Style::Close | Style::Titlebar);
	Ball ball;
<<<<<<< HEAD
	Terrain terrain;
	FloatRect posBalle;
	FloatRect* murs = terrain.returnMurs();
	int collision;
	RectangleShape balle = ball.returnBalle();
=======
>>>>>>> 3e17115840fdf5d7408f612ce3dd66e2213eb8e6
	app.setFramerateLimit(60);
	RectangleShape rectangle(Vector2f(32, 64));
	RectangleShape murG(Vector2f(1, 480));
	murG.setPosition(0,0);
	FloatRect posMurG = murG.getGlobalBounds();
	RectangleShape murD(Vector2f(1, 480));
	murD.setPosition(639,0);
	FloatRect posMurD = murD.getGlobalBounds();
	RectangleShape murB(Vector2f(640, 1));
	murB.setPosition(0, 479);
	FloatRect posMurB = murB.getGlobalBounds();
	RectangleShape murH(Vector2f(640, 1));
	murH.setPosition(0,0);
	FloatRect posMurH = murH.getGlobalBounds();
	while (app.isOpen()) {
		Event event;
		while (app.pollEvent(event)) {
			if (event.type == Event::Closed) {
				app.close();
			}
			if (Keyboard::isKeyPressed(Keyboard::Down)) {
			rectangle.move(0, 5);
			}
			if (Keyboard::isKeyPressed(Keyboard::Up)) {
				rectangle.move(0, -5);
			}
			if (Keyboard::isKeyPressed(Keyboard::J)) {
				ball.ReverseX();
			}
			if (Keyboard::isKeyPressed(Keyboard::K)) {
				ball.ReverseY();
			}
		}
<<<<<<< HEAD
		balle = ball.returnBalle();
		posBalle = ball.returnPos();
		std::cout << ball.speedY << "\n";
		//collision = checkCollision(ball, terrain);
		if (posBalle.intersects(murs[0])) 
			ball.ReverseX();
		if (posBalle.intersects(murs[1]))
			ball.ReverseX();
		if (posBalle.intersects(murs[2]) || posBalle.intersects(murs[3]))
=======
		if (posBalle.intersects(posMurG)) 
			ball.ReverseX();
		if (posBalle.intersects(posMurD))
			ball.ReverseX();
		if (posBalle.intersects(posMurH) || posBalle.intersects(posMurB))
>>>>>>> 3e17115840fdf5d7408f612ce3dd66e2213eb8e6
			ball.ReverseY();
		ball.MoveX();
		ball.MoveY();
		rectangle.setFillColor(Color::White);
<<<<<<< HEAD
		balle.setFillColor(Color::White);
=======
		ball.balle.setFillColor(Color::White);
>>>>>>> 3e17115840fdf5d7408f612ce3dd66e2213eb8e6
		murG.setFillColor(Color::Red);
		murD.setFillColor(Color::Red);
		murH.setFillColor(Color::Red);
		murB.setFillColor(Color::Red);
		app.clear(Color::Black);
		app.draw(murG);
		app.draw(murD);
		app.draw(murH);
		app.draw(murB);
<<<<<<< HEAD
		app.draw(balle);
=======
		app.draw(ball.balle);
>>>>>>> 3e17115840fdf5d7408f612ce3dd66e2213eb8e6
		app.draw(rectangle);
		app.display();
	}
	return EXIT_SUCCESS;
}
