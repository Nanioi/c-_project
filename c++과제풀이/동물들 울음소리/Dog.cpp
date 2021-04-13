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
	cout << "港港" << endl;
}

void Dog::print() const
{
	cout << " 唱捞绰" << "\t" << ":" << age << endl;
	cout << " 个公霸" << "\t" << ":" << weight << endl;
	cout << " 前辆" << "\t" << ":" << breed << endl;
}
