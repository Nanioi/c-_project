#include"Complex.h"


Complex::Complex()
{
	real=0;
	image=0;
}

/*
Complex::Complex() : real(0), image(0)
{
}*/

Complex::Complex(int r, int i)
{
	this->real=r;
	this->image=i;
}
/*
Complex::~Complex()
{
	cout<< "Destructor" <<endl;
}
*/
void Complex::ShowComplex() const
{
	cout << "(" << real << " + " << image << "i)" << endl;
}//ShowComplex()

void Complex::ShowComplex(int r, int i)
{
	real=r;
	image=i;
	
	cout << "(" << real << " + " << image << "i)" << endl;
}

/*Complex Complex::Sum(Complex right)	//멤버 함수
{
	Complex result;

	result.real = this->real+right.real;
	result.image = this->image+right.image;

	return result;
}*/

Complex operator+(const Complex &right) const
{

}


Complex Complex::Sub(Complex right)
{
	Complex result;

	result.real = this->real-right.real;
	result.image = this->image-right.image;

	return result;
}

Complex Sub(Complex left, Complex right)	//friend 함수
{
	Complex result;

	result.real=left.real-right.real;
	result.image=left.image-right.image;

	return result;
}

Complex Complex::operator-() const
{
	Complex result;
	result.real=-(this->real);
	result.image=-(this->image);

	return result;
}