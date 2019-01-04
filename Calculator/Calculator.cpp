#include "Calculator.h"



Calculator::Calculator(sf::RenderWindow *window): myWindow(window)
{
	myDisplay.setPosition(sf::Vector2f{ 2, 2 });

	calculatorRectangle.setSize(sf::Vector2f{ 512, 360 });
	calculatorRectangle.setFillColor(sf::Color::Blue);


}


Calculator::~Calculator()
{
}

void Calculator::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(calculatorRectangle);
	for (auto& i : vButton) {
		target.draw(i);
	}
	target.draw(myDisplay);
}
