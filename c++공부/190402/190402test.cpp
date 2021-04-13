#include<iostream>
#include"190402.h"
using namespace std;

Complex &CopyComplex( Complex &des, Complex &src)
{
	des=src;
	return des;
}

void main()
{
	Complex x(10,20);
	Complex y(30,40);
	Complex z;

	z=CopyComplex(x,y);
	cout<<" x ->"<<endl ;
	x.ShowComplex();
	cout<<" y ->"<<endl ;
	y.ShowComplex();
	cout<<" z-> "<<endl ;
	z.ShowComplex();
}