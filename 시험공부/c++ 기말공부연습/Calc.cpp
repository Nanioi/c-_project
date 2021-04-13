#include "Calc.h"


template<typename T1, typename T2>
Calc<T1, T2>::Calc()
{
	x = 0;
	y = 0;
}

template<typename T1, typename T2>
Calc<T1, T2>::Calc(T1 x, T2 y):Calc<T1,T2>::Calc()
{
	this->x = x;
	this->y = y;
}
template<typename T1, typename T2>
Calc<T1, T2>::~Calc()
{
}

template<typename T1, typename T2>
void Calc<T1, T2>::inputxy(T1 x, T2 y) const
{
	this->x = x;
	this->y = y;
}

template<typename T1, typename T2>
void Calc<T1, T2>::Show() const
{
	cout << "Calc 클래스" << endl;
	cout << "현재 x의 값은 " << x << "이고 y의 값은 " << y << "이다" << endl;
}