#pragma once
#include<iostream>
#include"Add.h"
#include"Mul.h"
#include"Add2.h"

using namespace std;

void main()
{
	//Add x;
	//x.Init(3,5);
	Mul y;
	y.Init(2,7);
	
	Add xy;
	xy.Init(4,6);
	Calc *a;
	a=new Add(2,4);

	xy.prn();
	a->prn();

	//x.Sum();
	//x.prn();

	y.Gob();
	y.prn();

	/*Add2 z;
	z.Init(4,6);
	z.Sum();
	z.prn();*/
}