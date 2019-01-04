#include "Button1.h"


Button1::Button1(Type type, std::string character) :value(0)
{
	if (type == Type::Number) value = stoi(character);
	else sText = character;
}



Button1::~Button1()
{
}

int Button1::getValue()
{
	return value;
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

void Button1::sellect()
{
	rectangle.setOutlineThickness(2);
	rectangle.setOutlineColor(sf::Color::Black);
}

void Button1::deselcted()
{
	rectangle.setOutlineColor(sf::Color::White);
}
