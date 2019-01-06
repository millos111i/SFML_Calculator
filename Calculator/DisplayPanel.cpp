#include "DisplayPanel.h"



DisplayPanel::DisplayPanel()
{
	rectangle.setSize(sf::Vector2f{ 484, 78 });
	rectangle.setFillColor(sf::Color::White);
	font.loadFromFile("arial.ttf");
	text.setFont(font);
	text.setString(std::string{ "0" });
	text.setFillColor(sf::Color::Black);
	text.setCharacterSize(24);
	text.setPosition(sf::Vector2f{ 460.0f, 5.f });
}


DisplayPanel::~DisplayPanel()
{
}

void DisplayPanel::addValue(std::string value, Type type)
{
	int length = 0;
	if (type == Type::Number) {
		std::string separator{ "." };
		int position = value.find(separator);
		if (position != -1) length = value.length() - position;
	}
	strText.append(value);
	text.setString(strText);
	text.move(sf::Vector2f{ -13.f - (length*2.f), 0.f });
}

void DisplayPanel::reset()
{
	strText = "";
	text.setString(strText);
	text.setPosition(sf::Vector2f{ 460.0f, 5.f });
}

void DisplayPanel::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(rectangle, states);
	target.draw(text, states);
}
