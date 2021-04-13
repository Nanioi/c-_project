#include "Sub.h"


template<typename T1, typename T2>
Sub<T1,T2>::Sub() : Calc()
{
}

template<typename T1, typename T2>
Sub<T1, T2>::Sub(T1 x, T2 y):Calc(x,y)
{
	this->x = x;
	this->y = y;
	z = 0;
}

template<typename T1, typename T2>
Sub<T1,T2>::~Sub()
{
}

template<typename T1, typename T2>
double Sub<T1, T2>::Subxy(T1 x, T2 y)
{
	z = x - y;
	if (z < 0)
		z *= -1;
	return z;
}

template<typename T1, typename T2>
void Sub<T1, T2>::Show()
{
	cout << x << "-" << y << "»«°ªÀÇ Àý´ñ°ª °á°ú:" << z << endl;
}
