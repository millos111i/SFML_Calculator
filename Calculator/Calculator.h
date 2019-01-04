#pragma once
#include "SFML/Graphics.hpp"
#include "Button1.h"
#include "DisplayPanel.h"
class Calculator :public sf::Drawable
{
public:
	Calculator(sf::RenderWindow *window);
	~Calculator();
private:
	sf::RenderWindow *myWindow;
	DisplayPanel myDisplay;
	Type myOperator;
	sf::RectangleShape calculatorRectangle;
	Button1 *sellectedButton;
	std::vector<Button1> vButton;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;

};

