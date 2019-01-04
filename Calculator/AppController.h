#pragma once
#include "SFML/Graphics.hpp"
#include "Button1.h"
class AppController 
{
public:
	AppController() : window({ 512, 360 }, "Calculator", sf::Style::Close | sf::Style::Titlebar) {}
	~AppController();
	void run();
private:
	sf::RenderWindow window;
	void render();
	Button1 *button;
};

