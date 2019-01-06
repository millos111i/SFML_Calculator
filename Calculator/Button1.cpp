#include "Button1.h"


Button1::Button1(Type type, std::string character, sf::Vector2f size, sf::Vector2f position, std::string path) :value(0), type(type)
{
	if (type == Type::Number) value = stoi(character);
	else sText.append(character);
	rectangle.setSize(size);
	rectangle.setPosition(position);
	buttonTexture.loadFromFile(path);
	rectangle.setTexture(&buttonTexture);
}

Button1::Button1(Type type, std::string character, sf::Vector2f position, std::string path) :type(type)
{
	if (type == Type::Number) value = stoi(character);
	else sText.append(character);
	rectangle.setSize(sf::Vector2f{ 52,40 });
	rectangle.setPosition(position);
	buttonTexture.loadFromFile(path);
	rectangle.setTexture(&buttonTexture);
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
	rectangle.setOutlineThickness(1);
	rectangle.setOutlineColor(sf::Color::Yellow);
}

void Button1::deselct()
{
	rectangle.setOutlineThickness(0);
}

Type Button1::getType()
{
	return type;
}
