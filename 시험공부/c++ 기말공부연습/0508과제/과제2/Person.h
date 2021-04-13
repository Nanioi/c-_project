#pragma once
#include <iostream>
#include <string>
#include <cstdbool>
using namespace std;

class Person
{
protected:
	string name;
	int age;
	bool gender;

public:
	Person() :name("°û³ª¿¬"), age(22), gender(false) {};
	Person(string name, int age, bool gender);
	~Person();

	void print()const;
};

