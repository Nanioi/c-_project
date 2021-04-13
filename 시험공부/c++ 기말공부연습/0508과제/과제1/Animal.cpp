#include "Animal.h"



Animal::Animal()
{
}

Animal::Animal(int age, int weight)
{
}


Animal::~Animal()
{
}

void Animal::speak() const
{
}

void Animal::print() const
{
}

void Animal::eat() const
{
}

void Animal::sleep() const
{
	cout << "ÀÚ´Ù" <<endl;
}

ostream & operator<<(ostream & os, string str)
{
	os << str<< endl;
	return os;
}
