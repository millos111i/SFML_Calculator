#include "SFML/Graphics.hpp"

int main() {
	sf::RenderWindow window({ 1024, 769 }, "Calculator");
	window.setFramerateLimit(30);

	while (window.isOpen())
	{
		sf::Event evnt;
		while (window.pollEvent(evnt))
		{
			if (evnt.type == sf::Event::Closed)	window.close();
		}

		window.clear();
		window.display();

	}
}