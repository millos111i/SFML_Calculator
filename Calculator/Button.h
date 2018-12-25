#pragma once
#include "SFML/Graphics.hpp"
#include"SFML/System/String.hpp"
class Button
{
public:
	Button();
	~Button();
private:
	sf::RectangleShape rectangle;
	sf::Color backgroundColor;
	sf::Color backgroundHoverColor;
	sf::Color backgroundClickedColor;
	sf::Text text;
	sf::Color textColor;
	bool isPresed;
	void setButtonColor(sf::Color color) { backgroundColor = color; };
	void setBackgroundHoverColor(sf::Color color) { backgroundHoverColor = color; }
	void setBackgroundClickedColor(sf::Color color) { backgroundClickedColor = color; }
	void setText(const std::string& text);
	void setTextColor(sf::Color color) { text.setColor(color); }
	void setTextSize(unsigned int size);
	void centerText();
};

