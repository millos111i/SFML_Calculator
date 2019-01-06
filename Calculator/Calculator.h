#pragma once
#include "SFML/Graphics.hpp"
#include "Button1.h"
#include "DisplayPanel.h"
#include "Computer.h"

class Calculator :public sf::Drawable
{
public:
	Calculator(sf::RenderWindow *window);
	~Calculator();
	void update();
	void eventHandler(sf::Event &evnt);
private:
	int maxAmountOfNumbers;
	sf::RenderWindow *myWindow;
	DisplayPanel myDisplay;
	Type currentType;
	sf::RectangleShape calculatorRectangle;
	Button1 *sellectedButton;
	Button1* myButtons[52];
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;
	Computer myComputer;
	bool comma;
	float value;
	float count = 1;
};

