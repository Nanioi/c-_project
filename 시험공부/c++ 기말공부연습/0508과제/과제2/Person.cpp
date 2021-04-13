#include "Person.h"





Person::Person(string name, int age, bool gender)
{
	this->name = name;
	this->age = age;
	this->gender=gender;
}


Person::~Person()
{
}

void Person::print() const
{
}
