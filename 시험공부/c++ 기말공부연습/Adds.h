#pragma once
#include <iostream>
#include "Calc.h"
using namespace std;

template<typename T1, typename T2> 
class Adds:public Calc<T1, T2>
{
private:
	double z;

public:

	Adds(T1 x, T2 y);
	~Adds();

	double Addxy(T1 x, T2 y);
	void Show();
};

