#include "Dog.h"



Dog::Dog()
{
}

Dog::Dog(int age, int weight, string breed)
{
	this->age = age;
	this->weight = weight;
	this->breed = breed;
}


Dog::~Dog()
{
}

void Dog::speak() const
{
	cout << "�۸�" << endl;
}

void Dog::print() const
{
	cout << " ���̴�" << "\t" << ":" << age << endl;
	cout << " ������" << "\t" << ":" << weight << endl;
	cout << " ǰ��" << "\t" << ":" << breed << endl;
}
