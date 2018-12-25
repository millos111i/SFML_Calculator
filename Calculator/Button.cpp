#include "Button.h"



Button::Button()
{
	
}


Button::~Button()
{
}

void Button::setText(const std::string & newText)
{
	text.setString(newText);
	centerText();
}

void Button::setTextSize(unsigned int size)
{
	 text.setCharacterSize(size); 
	 centerText();
}

void Button::centerText()
{
	text.setOrigin(text.getLocalBounds().width / 2.0, text.getLocalBounds().height / 2.0);
	text.setPosition(rectangle.getSize().x / 2, rectangle.getSize().y / 2);
}
