#pragma once
#include <iostream>
using namespace std;

template <typename T1,typename T2>
class Calc
{
protected:
	T1 x;
	T2 y;

public:
	Calc();
	Calc(T1 x, T2 y);
	virtual ~Calc();

	void Setx(T1 x) { this->x = x; };
	T1 getx() { return x; } ;
	void Sety(T2 y) { this->y = y; };
	T2 gety() { return y; } ;

	void inputxy(T1 x, T2 y)const;
	virtual void Show() const;
};

