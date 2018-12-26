#include "SFML/Graphics.hpp"
#include "Button.h"
#include <iostream>
int main() {
	sf::RenderWindow window({ 1024, 769 }, "Calculator", sf::Style::Close | sf::Style::Titlebar);
	window.setFramerateLimit(30);
	sf::Vector2f position(1, 1);
	sf::Vector2f buttonSize(20, 20);
	sf::Font font;
	if (!font.loadFromFile("arial.ttf")) std::cout << "Failed font loading" << std::endl;
	else std::cout << "Font loaded from file" << std::endl;
	std::string textM =	"+";
	Button button(position,buttonSize,&font,textM);
	while (window.isOpen())
	{
		sf::Event evnt;
		while (window.pollEvent(evnt))
		{
			if (evnt.type == sf::Event::Closed)	window.close();
		}
		window.draw(button);
		window.clear();
		window.display();

	}
}