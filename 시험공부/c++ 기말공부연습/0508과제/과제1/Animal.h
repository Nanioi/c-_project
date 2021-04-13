#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	int age;
	int weight;

public:
	Animal();
	Animal(int age, int weight);
	~Animal();

	void speak()const;
	void print()const;
	virtual void eat()const;
	virtual void sleep()const;

};

