#include <iostream>
using namespace std;

/*********************
Complex class ADT Level
description : .....
*********************/
class Complex
{
	// member variables
private:
	int real;
	int image;

	// member functions
public:
	// constructor & destructor
	Complex();
	Complex(int r, int i);
	~Complex();


	// accessor
	int GetReal() const		{ return real; }
	int GetImage() const	{ return image; }

	// mutator
	void SetReal(int r)		{ real = r; }
	void SetImage(int i)	{ image = i; }
	void SetComplex(int r, int i)
	{ real = r; image = i; }

	// function
	void ShowComplex() const;
	void ShowComplex(int r, int i);

	// operator functions
	Complex operator+(const Complex &) const;
	Complex operator-(const Complex &) const;
	Complex operator-() const;
};