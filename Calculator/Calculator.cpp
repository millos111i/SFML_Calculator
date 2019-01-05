#include "Calculator.h"



Calculator::Calculator(sf::RenderWindow *window): myWindow(window)
{
	myDisplay.setPosition(sf::Vector2f{ 2, 2 });

	calculatorRectangle.setSize(sf::Vector2f{ 488, 334 });
	calculatorRectangle.setFillColor(sf::Color::Blue);
	//first row
	Button1* button0 = new Button1(Type::Other, std::string{ "x_factorial" }, sf::Vector2f{ 2, 82 }, std::string{"img/x_factorial.png"});
	myButtons[0] = std::move(button0);

	Button1* button1 = new Button1(Type::Other, std::string{ "ln" }, sf::Vector2f{ 56, 82 }, std::string{ "img/ln.png" });
	myButtons[1] = std::move(button1);

	Button1* button2 = new Button1(Type::Bracket, std::string{ "(" }, sf::Vector2f{ 110, 82 }, std::string{ "img/left_bracket.png" });
	myButtons[2] = std::move(button2);

	Button1* button3 = new Button1(Type::Bracket, std::string{ ")" }, sf::Vector2f{ 164, 82 }, std::string{ "img/right_bracket.png" });
	myButtons[3] = std::move(button3);

	Button1* button4 = new Button1(Type::Memory, std::string{ "mc" }, sf::Vector2f{ 218, 82 }, std::string{ "img/mc.png" });
	myButtons[4] = std::move(button4);

	Button1* button5 = new Button1(Type::Memory, std::string{ "mr" }, sf::Vector2f{ 272, 82 }, std::string{ "img/mr.png" });
	myButtons[5] = std::move(button5);

	Button1* button6 = new Button1(Type::Memory, std::string{ "ms" }, sf::Vector2f{ 326, 82 }, std::string{ "img/ms.png" });
	myButtons[6] = std::move(button6);

	Button1* button7 = new Button1(Type::Memory, std::string{ "m+" }, sf::Vector2f{ 380, 82 }, std::string{ "img/m_plus.png" });
	myButtons[7] = std::move(button7);

	Button1* button8 = new Button1(Type::Memory, std::string{ "m-" }, sf::Vector2f{ 434, 82 }, std::string{ "img/m_minus.png" });
	myButtons[8] = std::move(button8);
	//second row
	Button1* button9 = new Button1(Type::Other, std::string{ "int" }, sf::Vector2f{ 2, 124 }, std::string{ "img/int.png" });
	myButtons[9] = std::move(button9);

	Button1* button10 = new Button1(Type::Other, std::string{ "sinh" }, sf::Vector2f{ 56, 124 }, std::string{ "img/sinh.png" });
	myButtons[10] = std::move(button10);

	Button1* button11 = new Button1(Type::Other, std::string{ "sin" }, sf::Vector2f{ 110, 124 }, std::string{ "img/sin.png" });
	myButtons[11] = std::move(button11);

	Button1* button12 = new Button1(Type::Other, std::string{ "10_to_x" }, sf::Vector2f{ 164, 124 }, std::string{ "img/10_to_x.png" });
	myButtons[12] = std::move(button12);

	Button1* button13 = new Button1(Type::Delete, std::string{ "arrow" }, sf::Vector2f{ 218, 124 }, std::string{ "img/arrow.png" });
	myButtons[13] = std::move(button13);

	Button1* button14 = new Button1(Type::Delete, std::string{ "ce" }, sf::Vector2f{ 272, 124 }, std::string{ "img/ce.png" });
	myButtons[14] = std::move(button14);

	Button1* button15 = new Button1(Type::Delete, std::string{ "c" }, sf::Vector2f{ 326, 124 }, std::string{ "img/c.png" });
	myButtons[15] = std::move(button15);

	Button1* button16 = new Button1(Type::Other, std::string{ "plus_minus" }, sf::Vector2f{ 380, 124 }, std::string{ "img/plus_minus.png" });
	myButtons[16] = std::move(button16);

	Button1* button17 = new Button1(Type::Other, std::string{ "sqrt_x" }, sf::Vector2f{ 434, 124 }, std::string{ "img/sqrt_x.png" });
	myButtons[17] = std::move(button17);
	//third row
	Button1* button18 = new Button1(Type::Pi, std::string{ "pi" }, sf::Vector2f{ 2, 166 }, std::string{ "img/pi.png" });
	myButtons[18] = std::move(button18);

	Button1* button19 = new Button1(Type::Other, std::string{ "cosh" }, sf::Vector2f{ 56, 166 }, std::string{ "img/cosh.png" });
	myButtons[19] = std::move(button19);

	Button1* button20 = new Button1(Type::Other, std::string{ "cos" }, sf::Vector2f{ 110, 166 }, std::string{ "img/cos.png" });
	myButtons[20] = std::move(button20);

	Button1* button21 = new Button1(Type::Other, std::string{ "x_2" }, sf::Vector2f{ 164, 166 }, std::string{ "img/x_2.png" });
	myButtons[21] = std::move(button21);

	Button1* button22 = new Button1(Type::Number, std::string{ "7" }, sf::Vector2f{ 218, 166 }, std::string{ "img/num7.png" });
	myButtons[22] = std::move(button22);

	Button1* button23 = new Button1(Type::Number, std::string{ "8" }, sf::Vector2f{ 272, 166 }, std::string{ "img/num8.png" });
	myButtons[23] = std::move(button23);

	Button1* button24 = new Button1(Type::Number, std::string{ "9" }, sf::Vector2f{ 326, 166 }, std::string{ "img/num9.png" });
	myButtons[24] = std::move(button24);

	Button1* button25 = new Button1(Type::Operator, std::string{ "/" }, sf::Vector2f{ 380, 166 }, std::string{ "img/div.png" });
	myButtons[25] = std::move(button25);

	Button1* button26 = new Button1(Type::Other, std::string{ "%" }, sf::Vector2f{ 434, 166 }, std::string{ "img/procent.png" });
	myButtons[26] = std::move(button26);
	//fourth row
	Button1* button27 = new Button1(Type::Other, std::string{ "f-e" }, sf::Vector2f{ 2, 208 }, std::string{ "img/f-e.png" });
	myButtons[27] = std::move(button27);

	Button1* button28 = new Button1(Type::Other, std::string{ "tgh" }, sf::Vector2f{ 56, 208 }, std::string{ "img/tgh.png" });
	myButtons[28] = std::move(button28);

	Button1* button29 = new Button1(Type::Other, std::string{ "tg" }, sf::Vector2f{ 110, 208 }, std::string{ "img/tg.png" });
	myButtons[29] = std::move(button29);

	Button1* button30 = new Button1(Type::Other, std::string{ "x_3" }, sf::Vector2f{ 164, 208 }, std::string{ "img/x_3.png" });
	myButtons[30] = std::move(button30);

	Button1* button31 = new Button1(Type::Number, std::string{ "4" }, sf::Vector2f{ 218, 208 }, std::string{ "img/num4.png" });
	myButtons[31] = std::move(button31);

	Button1* button32 = new Button1(Type::Number, std::string{ "5" }, sf::Vector2f{ 272, 208 }, std::string{ "img/num5.png" });
	myButtons[32] = std::move(button32);

	Button1* button33 = new Button1(Type::Number, std::string{ "6" }, sf::Vector2f{ 326, 208 }, std::string{ "img/num6.png" });
	myButtons[33] = std::move(button33);

	Button1* button34 = new Button1(Type::Operator, std::string{ "*" }, sf::Vector2f{ 380, 208 }, std::string{ "img/multiply.png" });
	myButtons[34] = std::move(button34);

	Button1* button35 = new Button1(Type::Other, std::string{ "1_x" }, sf::Vector2f{ 434, 208 }, std::string{ "img/1_x.png" });
	myButtons[35] = std::move(button35);
	//fifth row
	Button1* button36 = new Button1(Type::Other, std::string{ "y_sqrt_x" }, sf::Vector2f{ 2, 250 }, std::string{ "img/y_sqrt_x.png" });
	myButtons[36] = std::move(button36);

	Button1* button37 = new Button1(Type::Other, std::string{ "3_sqrt_x" }, sf::Vector2f{ 56, 250 }, std::string{ "img/3_sqrt_x.png" });
	myButtons[37] = std::move(button37);

	Button1* button38 = new Button1(Type::Other, std::string{ "e_x" }, sf::Vector2f{ 110, 250 }, std::string{ "img/e_x.png" });
	myButtons[38] = std::move(button38);

	Button1* button39 = new Button1(Type::Other, std::string{ "x_y" }, sf::Vector2f{ 164, 250 }, std::string{ "img/x_y.png" });
	myButtons[39] = std::move(button39);

	Button1* button40 = new Button1(Type::Number, std::string{ "1" }, sf::Vector2f{ 218, 250 }, std::string{ "img/num1.png" });
	myButtons[40] = std::move(button40);

	Button1* button41 = new Button1(Type::Number, std::string{ "2" }, sf::Vector2f{ 272, 250 }, std::string{ "img/num2.png" });
	myButtons[41] = std::move(button41);

	Button1* button42 = new Button1(Type::Number, std::string{ "3" }, sf::Vector2f{ 326, 250 }, std::string{ "img/num3.png" });
	myButtons[42] = std::move(button42);

	Button1* button43 = new Button1(Type::Operator, std::string{ "-" }, sf::Vector2f{ 380, 250 }, std::string{ "img/minus.png" });
	myButtons[43] = std::move(button43);

	Button1* button44 = new Button1(Type::Equal, std::string{ "=" }, sf::Vector2f{ 52,82 }, sf::Vector2f{ 434, 250 }, std::string{ "img/equal.png" });
	myButtons[44] = std::move(button44);
	//last row
	Button1* button45 = new Button1(Type::Ans, std::string{ "ans" }, sf::Vector2f{ 2, 292 }, std::string{ "img/ans.png" });
	myButtons[45] = std::move(button45);

	Button1* button46 = new Button1(Type::Other, std::string{ "exp" }, sf::Vector2f{ 56, 292 }, std::string{ "img/exp.png" });
	myButtons[46] = std::move(button46);

	Button1* button47 = new Button1(Type::Other, std::string{ "mod" }, sf::Vector2f{ 110, 292 }, std::string{ "img/mod.png" });
	myButtons[47] = std::move(button47);

	Button1* button48 = new Button1(Type::Other, std::string{ "log" }, sf::Vector2f{ 164, 292 }, std::string{ "img/log.png" });
	myButtons[48] = std::move(button48);

	Button1* button49 = new Button1(Type::Number, std::string{ "0" }, sf::Vector2f{ 106, 40 }, sf::Vector2f{ 218, 292 }, std::string{ "img/num0.png" });
	myButtons[49] = std::move(button49);

	Button1* button50 = new Button1(Type::Comma, std::string{ "," }, sf::Vector2f{ 326, 292 }, std::string{ "img/comma.png" });
	myButtons[50] = std::move(button50);

	Button1* button51 = new Button1(Type::Operator, std::string{ "+" }, sf::Vector2f{ 380, 292 }, std::string{ "img/plus.png" });
	myButtons[51] = std::move(button51);
}


Calculator::~Calculator()
{
	for (unsigned int i = 0; i < 52; i++)
		delete(myButtons[i]);
}

void Calculator::update()
{
	sellectedButton = nullptr;
	for (unsigned int i = 0; i < 52; i++) {
		sf::Vector2i mousePossition = sf::Mouse::getPosition(*myWindow);
		if (myButtons[i]->getRect().contains(sf::Vector2f{ (float)mousePossition.x, (float)mousePossition.y })) {
			myButtons[i]->sellect();
			sellectedButton = myButtons[i];
		}
		else {
			myButtons[i]->deselct();
		}
	}
}

void Calculator::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(calculatorRectangle);
	for (unsigned int i = 0; i < 52; i++) {
		target.draw(*myButtons[i]);
	}
	target.draw(myDisplay);
}
