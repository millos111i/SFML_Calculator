#pragma once
#include "SFML/Graphics.hpp"
#include "Button1.h"
#include "Calculator.h"
#include "DisplayPanel.h"

class AppController 
{
public:
	AppController() : window({ 488, 334 }, "Calculator", sf::Style::Close | sf::Style::Titlebar), myCalculator(&window) {}
	~AppController();
	void run();
private:
	sf::RenderWindow window;
	void render();
	Calculator myCalculator;
	DisplayPanel myDisplay;
};

