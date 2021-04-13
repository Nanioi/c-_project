// Implementation Level

#include "Complex.h"


Complex::Complex() : real(0), image(0)
{
}

Complex::Complex(int r, int i) : real(r), image(i)
{
}

Complex::~Complex() {
	//cout << "CALL DESTRUCTOR" << endl;
}

void Complex::ShowComplex() const
{
	cout << "(" << real << " + " << image
		 << "i)" << endl;

} // ShowComplex()

void Complex::ShowComplex(int r, int i)
{
	real = r;
	image = i;
	cout << "(" << real << " + " << image
		 << "i)" << endl;
}

Complex Complex::operator+(const Complex &right) const
{
	Complex result;

	result.real = this->real + right.real;
	result.image = this->image + right.image;

	return result;
}

Complex Complex::operator-(const Complex &right) const
{
	Complex result;

	result.real = this->real - right.real;
	result.image = this->image - right.image;

	return result;
}

Complex Complex::operator-() const
{
	Complex result;

	result.real = -(this->real);
	result.image = -(this->image);

	return result;
}
