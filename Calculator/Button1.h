#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>

class Button1 : public sf::Drawable
{
public:
	Button1(sf::Vector2f position);
	Button1(sf::Vector2f position, sf::Vector2f size);
	~Button1();
	int getValue();
	sf::FloatRect getRect() const;
private:
	sf::RectangleShape rectangle;
	sf::Texture buttonTexture;
	sf::Vector2f defaultSize;
	void setDefaultSize() { defaultSize = { 50, 40 }; }
	void getCustomButtonProperties();
	void setPlusButtonTexture() { buttonTexture.loadFromFile("img/plus.png"); }
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;
	float value;
};

