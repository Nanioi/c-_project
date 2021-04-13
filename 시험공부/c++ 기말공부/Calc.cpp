#include "Calc.h"
#include <iostream>
#include<stdio.h>



Calc::Calc()
{
}


Calc::~Calc()
{
}
template <typename T1, typename T2>
T1 A(T1 a, T2 b) {
	T1 c=0;
	try {
		if (b == 0) 
			throw b;
		c = a / b;
		
	}
	catch (T1 e) {
		
	}
	return c;
}
template <typename T>
void main() {

	T a=0,b=1;
	std::cout << A(a, b) << std::endl;
	std::cout << A(2, 1.0) << std::endl;
	std::cout << A(2.0, 1) << std::endl;
	std::cout << A(2, 1) << std::endl;
	std::cout << A(2.0, 1.0) << std::endl;
	printf("%lf", A(2, 1));
}



