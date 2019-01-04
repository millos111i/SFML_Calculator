#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>

enum class Type {
	Number, Operator, Equal, Other
};

class Button1 : public sf::Drawable
{
public:
	Button1(Type type, std::string character);
	~Button1();
	int getValue();
	sf::FloatRect getRect() const;
	void sellect();
	void deselcted();
private:
	sf::RectangleShape rectangle;
	sf::Texture buttonTexture;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;
	float value;
	Type type;
	std::string sText;
};

