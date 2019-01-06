#pragma once
#include "SFML/Graphics.hpp"
#include "Button1.h"
#include <string>

class DisplayPanel : public sf::Drawable, public sf::Transformable
{
public:
	DisplayPanel();
	~DisplayPanel();
	void addValue(std::string value, Type type = Type::Number);
	void reset();
	std::string strText;
private:
	sf::RectangleShape rectangle;
	sf::Text text;
	sf::Font font;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;
};

