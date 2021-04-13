#include "Adds.h"




template<typename T1, typename T2 >
Adds<T1, T2>::Adds(T1 x, T2 y) :Calc(x,y)
{
	
	z = 0;
}

template<typename T1, typename T2>
Adds<T1, T2>::~Adds()
{
	;
}

template<typename T1, typename T2>
double Adds<T1, T2>::Addxy(T1 x, T2 y)
{
	z = x + y;
	return z;
}

template<typename T1, typename T2>
void Adds<T1, T2>::Show()
{
	cout <<x<<"+"<<y<< "더하기 결과:" << z << endl;
}
