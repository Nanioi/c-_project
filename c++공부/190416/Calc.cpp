#include"Calc.h"

void Calc::Init(int newA, int newB)
{
	a=newA;
	b=newB;
	c=0;
}

void Calc::prn()
{
	cout<<a<<"\t"<<b<<"\t"<<c<<endl;
}