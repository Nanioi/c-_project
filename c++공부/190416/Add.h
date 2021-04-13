#include"Calc.h"
#pragma once

class Add : public Calc
{
public :
	void Sum();
	void prn();
	Add(int a, int b);
	Add();
};