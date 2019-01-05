#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>

enum class Type {
	Number, Operator, Equal, Other, Memory, Bracket, Pi, Delete, Ans, Comma
};

class Button1 : public sf::Drawable
{
public:
	Button1(Type type, std::string character, sf::Vector2f size, sf::Vector2f position, std::string path);
	Button1(Type type, std::string character, sf::Vector2f position, std::string path);
	~Button1();
	int getValue();
	sf::FloatRect getRect() const;
	void sellect();
	void deselct();
private:
	sf::RectangleShape rectangle;
	sf::Texture buttonTexture;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;
	float value;
	Type type;
	std::string sText;
};

