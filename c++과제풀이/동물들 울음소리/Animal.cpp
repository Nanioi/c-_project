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
	cout << " ����" << "\t" <<":"<< age << endl;
	cout << " ������" << "\t" << ":"<<weight << endl;
}

void Animal::eat() const
{
}

void Animal::sleep() const
{
	cout << "�ڴ�" << endl;
}

ostream & operator<<(ostream & os, string str)
{
	os << str << endl;
	return os;
}
