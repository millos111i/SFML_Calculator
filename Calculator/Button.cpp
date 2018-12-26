#include "Button.h"



Button::Button(sf::Vector2f position, sf::Vector2f buttonSize, sf::Font * font, std::string text)
{
	rectangle.setSize(buttonSize);
	rectangle.setPosition(position);
	setFont(*font);
	this->text.setString(text);
	setCustomProperties();
}


Button::~Button()
{
}

void Button::setButtonOutline(float thickness, sf::Color color)
{
	rectangle.setOutlineThickness(thickness);
	rectangle.setOutlineColor(color);
}

void Button::setText(const std::string & newText)
{
	text.setString(newText);
	centerText();
}

void Button::setFont(sf::Font newFont)
{
	text.setFont(newFont);
	centerText();
}

void Button::setTextSize(unsigned size)
{
	 text.setCharacterSize(size); 
	 centerText();
}

void Button::centerText()
{
	
	text.setOrigin(text.getLocalBounds().width / 2.0, text.getLocalBounds().height / 2.0);
	text.setPosition(rectangle.getSize().x / 2, rectangle.getSize().y / 2);
}

void Button::setCustomProperties()
{
	setTextSize(12);
	setButtonOutline(2, sf::Color(100,100,100));
	setButtonColor(sf::Color(200, 100, 100));
	setBackgroundHoverColor(sf::Color(200, 100, 100));
	setBackgroundClickedColor(sf::Color(200, 200, 100));
	setTextColorDefault(sf::Color::Black );
	
}

void Button::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(rectangle);
	target.draw(text);
}
