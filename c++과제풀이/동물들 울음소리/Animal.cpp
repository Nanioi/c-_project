#include "Animal.h"



Animal::Animal()
{
}

Animal::Animal(int age, int weight)
{
	this->age = age;
	this->weight = weight;
}


Animal::~Animal()
{
}

void Animal::speak() const
{
}

void Animal::print() const
{
	cout << " 나이" << "\t" <<":"<< age << endl;
	cout << " 몸무게" << "\t" << ":"<<weight << endl;
}

void Animal::eat() const
{
}

void Animal::sleep() const
{
	cout << "자다" << endl;
}

ostream & operator<<(ostream & os, string str)
{
	os << str << endl;
	return os;
}
