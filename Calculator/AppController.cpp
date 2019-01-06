#include "AppController.h"



AppController::~AppController()
{
}

void AppController::run()
{
	while (window.isOpen()){

		sf::Event evnt;
		while (window.pollEvent(evnt))
		{
			if (evnt.type == sf::Event::Closed)	window.close();
			myCalculator.eventHandler(evnt);
		}
		update();
		render();
	}
}

void AppController::render()
{
	window.clear();
	window.draw(myCalculator);
	window.display();
}

void AppController::update()
{
	myCalculator.update();
}
