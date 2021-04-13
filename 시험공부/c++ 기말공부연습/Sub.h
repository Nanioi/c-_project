#pragma once
#include <iostream>
#include "Calc.h"

using namespace std;

template<typename T1, typename T2>
class Sub:public Calc<T1,T2>
{
private:
	double z;

public:
	Sub();
	Sub(T1 x, T2 y);
	~Sub();

	double Subxy(T1 x, T2 y);
	void Show();
};

