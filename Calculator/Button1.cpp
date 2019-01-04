#include "Button1.h"


Button1::Button1(sf::Vector2f position)
{
	setDefaultSize();
	rectangle.setSize(defaultSize);
	rectangle.setPosition(position);
	setPlusButtonTexture();
	rectangle.setTexture(&buttonTexture);
}

Button1::Button1(sf::Vector2f position, sf::Vector2f size)
{
	rectangle.setSize(size);
	rectangle.setPosition(position);
	setPlusButtonTexture();
	rectangle.setTexture(&buttonTexture);
}


Button1::~Button1()
{
}

int Button1::getValue()
{
	return value;
}

void Button1::getCustomButtonProperties()
{
	sf::Vector2f buttonSize(100, 100);
	rectangle.setSize(buttonSize);
}

void Button1::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(rectangle);
}

sf::FloatRect Button1::getRect() const
{
	sf::FloatRect rect = rectangle.getGlobalBounds();
	rect.top = rectangle.getPosition().y;
	rect.left = rectangle.getPosition().x;
	return rect;
}
