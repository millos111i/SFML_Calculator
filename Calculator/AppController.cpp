#include "AppController.h"



AppController::~AppController()
{
}

void AppController::run()
{
	sf::Vector2f position(100, 100);
	button = new Button1(position);
	while (window.isOpen()){

		sf::Event evnt;
		while (window.pollEvent(evnt))
		{
			if (evnt.type == sf::Event::Closed)	window.close();
		}
		render();
	}
}

void AppController::render()
{
	window.clear();
	window.draw(*button);
	window.display();
}
