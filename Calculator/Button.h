#pragma once
#include "SFML/Graphics/Text.hpp"
#include "SFML/Graphics/RectangleShape.hpp"
#include "SFML/Graphics/Font.hpp"
#include "SFML/Graphics/RenderTarget.hpp"
#include "SFML/Graphics/RenderWindow.hpp"
#include <iostream>

class Button : public sf::Drawable
{
public:
	Button(sf::Vector2f position, sf::Vector2f buttonSize, sf::Font & font, std::string text);
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
	void setButtonOutline(float thickness, sf::Color color);
	void setBackgroundHoverColor(sf::Color color) { backgroundHoverColor = color; }
	void setBackgroundClickedColor(sf::Color color) { backgroundClickedColor = color; }
	void setText(const std::string& text);
	void setFont(const sf::Font &font);
	void setTextColorDefault(sf::Color color){ text.setFillColor(color); }
	void setTextSize(unsigned size);
	void centerText();
	void setCustomProperties();
	void draw(sf::RenderTarget& target, sf::RenderStates states)const;
	void update(sf::Event& e, sf::RenderWindow& window);
};

