#include<iostream>
using namespace std;

class Complex
{
private :
	int real;
	int image;

public :
	Complex(int r=0, int i=0);
	void ShowComplex() const;
	void SetComplex(int r=0, int i=0);
};