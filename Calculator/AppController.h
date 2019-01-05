#pragma once
#include "SFML/Graphics.hpp"
#include "Calculator.h"

class AppController 
{
public:
	AppController() : window({ 488, 334 }, "Calculator", sf::Style::Close | sf::Style::Titlebar), myCalculator(&window) {}
	~AppController();
	void run();
private:
	sf::RenderWindow window;
	void render();
	void update();
	Calculator myCalculator;
};

