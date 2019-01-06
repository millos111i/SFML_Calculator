#pragma once
#include "Button1.h"
#include <vector>

class Computer
{
public:
	Computer();
	~Computer();
	bool isEmpty();
	void PushNumber(float number);
	void PushOperator(Type myOperator);
	float PopNumber();
	Type PopOperator();
	void setOperator(Type myOperator);
	void compute();
private:
	std::vector<float> vNumber;
	std::vector<Type> vOperator;
	float myResult;
	Type currentOperator;
};

