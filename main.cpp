#include <SFML/Graphics.hpp>
using namespace sf;
#include "Classes.hpp"
#include <iostream>
#include "fonctions.hpp"
#include <sstream>

int main(int argc, const char *argv[])
{
	RenderWindow app(VideoMode(640, 480, 32), "Mon jeu de Pong", Style::Resize | Style::Close | Style::Titlebar);
	Ball ball;
	Terrain terrain;
	Font font;
	int collision;
	font.loadFromFile("Roboto-Light.ttf");
	Text texte;
	texte.setFont(font);
	texte.setCharacterSize(40);
	texte.setColor(Color::White);
	texte.setPosition(280, 10);
	std::string chaine;
	std::ostringstream bla;
	FloatRect posBalle;
	RectangleShape balle = ball.returnBalle();
	app.setFramerateLimit(60);
	RectangleShape rectangle(Vector2f(32, 64));
	RectangleShape rectangle2(Vector2f(32, 64));
	FloatRect raquette;
	FloatRect raquette2;
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
	rectangle2.setPosition(608, 0);
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
			if (Keyboard::isKeyPressed(Keyboard::S)) {
				rectangle2.move(0, 5);
			}
			if (Keyboard::isKeyPressed(Keyboard::Z)) {
				rectangle2.move(0, -5);
			}
		}
		balle = ball.returnBalle();
		posBalle = ball.returnPos();
		raquette = rectangle.getGlobalBounds();
		raquette2 = rectangle2.getGlobalBounds();
		collision = ball.checkCollision(raquette, raquette2);
		if (collision == 1) {
			ball.engagement();
			terrain.incJ1();
		}
		if (collision == 2) {
			ball.engagement();
			terrain.incJ2();
		}
		ball.MoveX();
		ball.MoveY();
		bla.str("");
		bla << terrain.getScoreJ1() << " " << terrain.getScoreJ2();
		chaine = bla.str();
		texte.setString(chaine);
		rectangle.setFillColor(Color::White);
		rectangle2.setFillColor(Color::Green);
		balle.setFillColor(Color::White);
		murG.setFillColor(Color::Red);
		murD.setFillColor(Color::Red);
		murH.setFillColor(Color::Red);
		murB.setFillColor(Color::Red);
		app.clear(Color::Black);
		app.draw(texte);
		app.draw(murG);
		app.draw(murD);
		app.draw(murH);
		app.draw(murB);
		app.draw(balle);
		app.draw(rectangle);
		app.draw(rectangle2);
		app.display();
	}
	return EXIT_SUCCESS;
}
