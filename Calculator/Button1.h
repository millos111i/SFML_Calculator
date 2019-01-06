#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>
#include <string>

enum class Type {
	Number, Equal, Other, Memory, Bracket, Delete, Ans, Comma, Plus, Minus, Multiply, Division, Pi, None
};

class Button1 : public sf::Drawable
{
public:
	Button1(Type type, std::string character, sf::Vector2f size, sf::Vector2f position, std::string path);
	Button1(Type type, std::string character, sf::Vector2f position, std::string path);
	~Button1();
	int getValue();
	Type getType();
	sf::FloatRect getRect() const;
	void sellect();
	void deselct();
	std::string sText;
private:
	sf::RectangleShape rectangle;
	sf::Texture buttonTexture;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;
	float value;
	Type type;
};

