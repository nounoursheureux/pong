#include <SFML/Graphics.hpp>
using namespace sf;
#include "fonctions.hpp"

int main(int argc, const char *argv[])
{
	RenderWindow app(VideoMode(640, 480, 32), "Mon jeu de Pong", Style::Resize | Style::Close | Style::Titlebar);
	Ball ball;
	app.setFramerateLimit(60);
	RectangleShape rectangle(Vector2f(32, 64));
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
		}
		rectangle.setFillColor(Color::White);
		ball.balle.setFillColor(Color::Red);
		app.clear(Color::Blue);
		app.draw(ball.balle);
		app.draw(rectangle);
		app.display();
	}
	return EXIT_SUCCESS;
}
