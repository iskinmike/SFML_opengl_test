#include <SFML/Graphics.hpp>
#include <SFML\OpenGL.hpp>
int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		glClearDepth(1.f);
		glClearColor(0.f, 0.f, 0.f, 1.f);

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}
