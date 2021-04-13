// Application Level

#include <iostream>
#include "Complex.h"

using namespace std;

void main()
{
	Complex x(10,20), y(15,30), z(1,2);

	
	z = x + y + z;
	cout << z;

	z = x - y;
	z.ShowComplex();

	z = -z;
	z.ShowComplex();

	
}