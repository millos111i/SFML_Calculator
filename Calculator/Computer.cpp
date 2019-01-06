#include "Computer.h"



Computer::Computer():  myResult(0.0f)
{
}


Computer::~Computer()
{
}

bool Computer::isEmpty()
{
	return vNumber.empty();
}

void Computer::PushNumber(float number)
{
	vNumber.push_back(number);
}

void Computer::PushOperator(Type myOperator)
{
	vOperator.push_back(myOperator);
}

float Computer::PopNumber()
{
	float number = vNumber.back();
	vNumber.pop_back();
	return number;
}

Type Computer::PopOperator()
{
	Type myOperator = vOperator.back();
	vOperator.pop_back();
	return myOperator;
}

void Computer::setOperator(Type myOperator)
{
	currentOperator = myOperator;
}

void Computer::compute()
{

}
