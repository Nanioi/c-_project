#pragma once
#include "Person.h"
#include <string>
class Employee:public Person
{
protected:
	string no;
	int salary;
	string department;

public:
	Employee();
	Employee(string name, bool gender, string no, int salary, string department);
	~Employee();

	void print()const;
};

