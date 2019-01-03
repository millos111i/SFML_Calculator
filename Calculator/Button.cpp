#include "Button.h"



Button::Button(sf::Vector2f position, sf::Vector2f buttonSize, sf::Font & font, std::string text)
{
	rectangle.setSize(buttonSize);
	rectangle.setPosition(position);
	setFont(font);
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

void Button::setFont(const sf::Font &newFont)
{
	text.setFont(newFont);
}


void Button::setTextSize(unsigned size)
{
	 text.setCharacterSize(size); 
	 centerText();
}

void Button::centerText()
{
	std::cout << "text get origin x = " << text.getOrigin().x << std::endl;
	rectangle.setOrigin(rectangle.getSize().x, rectangle.getSize().y);
	text.setOrigin(text.getLocalBounds().width / 2.0, text.getLocalBounds().height);
	text.setPosition(rectangle.getPosition().x - rectangle.getSize().x / 2.0, rectangle.getPosition().y - rectangle.getSize().y / 2.0);
	std::cout << "text position x = " << text.getPosition().x << std::endl;
	std::cout << "text position y = " << text.getPosition().y << std::endl;
	std::cout << "rectangle size x  =  " << rectangle.getSize().x << std::endl;
	std::cout << "rectangle position x  =  " << rectangle.getPosition().x << std::endl;
	std::cout << "test loc bounds width  =  " << text.getLocalBounds().width << std::endl;
	std::cout << "text get origin x = " << text.getOrigin().x << std::endl;

}

void Button::setCustomProperties()
{
	setTextSize(22);
	setButtonOutline(2, sf::Color::Red);
	setButtonColor(sf::Color::Blue);
	setBackgroundHoverColor(sf::Color(200, 100, 100));
	setBackgroundClickedColor(sf::Color(200, 200, 100));
	setTextColorDefault(sf::Color::Blue );
	
}

void Button::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(rectangle);
	target.draw(text);
}

void Button::update(sf::Event& e, sf::RenderWindow& window)
{
	
}
