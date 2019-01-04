#include "Button1.h"


Button1::Button1(Type type, std::string character, sf::Vector2f position) :value(0)
{
	if (type == Type::Number) value = stoi(character);
	else sText = character;
	setDefaultSize();
	rectangle.setSize(defaultSize);
	rectangle.setPosition(position);
	setPlusButtonTexture();
	rectangle.setTexture(&buttonTexture);
}

Button1::Button1(Type type, std::string character, sf::Vector2f position, sf::Vector2f size) :value(0)
{
	if (type == Type::Number) value = stoi(character);
	else sText = character;
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
	rectangle.setSize(sf::Vector2f{100, 100});
}

void Button1::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(rectangle);
}


sf::FloatRect Button1::getRect() const
{
	sf::FloatRect rect = rectangle.getGlobalBounds();
	rect.top = rectangle.getPosition().y;
	rect.left = rectangle.getPosition().x;
	return rect;
}
