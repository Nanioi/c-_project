#include<iostream>
#include"190402.h"
using namespace std;

Complex::Complex(int r, int i)
{
	real=r;
	image=i;
}

void Complex::ShowComplex() const
{
	cout<<"("<<real<<" + "<< image << "i )"<<endl;
}

void Complex::SetComplex(int r, int i)
{
	real=r;
	image=i;
}

