#pragma once
#include "Animal.h"
#include <string>
class Dog:public Animal
{
private:
	string breed;

public:
	Dog();
	Dog(int age, int weight, string breed);
	~Dog();

	void speak()const;
	void print()const;
};

