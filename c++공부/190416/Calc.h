#include<iostream>
#pragma once
using namespace std;

class Calc
{
protected :
	int a;
	int b;
	int c;

public :
		void Init(int newA, int newB);
		virtual void prn();
};