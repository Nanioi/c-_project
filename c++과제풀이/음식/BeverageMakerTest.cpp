#include <iostream>
#include "BeverageMaker.h"

using namespace std;

void main()
{
	
	BeverageMaker x(40, 25),y(10, 15), z(3, 2);
	

	z = x + y + z;


	z = x.operator+(y);
	z.ShowBeverageMaker();
	z.SSAddSub(1,2);
	
	BeverageMaker a, b, c;

	cout << a.MachineCnt << endl;
	b.MachineCntAdd();
	cout << b.MachineCnt << endl;
	a.MachineCntAdd();
	cout << c.MachineCnt << endl;

	x = -x;
	x.ShowBeverageMaker();

}