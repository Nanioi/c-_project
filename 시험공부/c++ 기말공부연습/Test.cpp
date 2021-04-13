#include <iostream>
#include "Calc.h"
#include "Adds.h"
#include "Sub.h"

using namespace std;

void main()
{
	Calc<int, int> *A = new Calc<int,int>(1,2);
	
//	Calc<double, double> *B;
//	Sub<double, double>*b;

	//A=&adds;
	//A->Show();
	
//	a->Addxy(3,4);
//	a->Show();

//	b->Subxy(1.0, 3.0);
//	b->Show();

}