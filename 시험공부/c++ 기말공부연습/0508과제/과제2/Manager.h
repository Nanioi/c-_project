#pragma once
#include "Employee.h"
#include "Person.h"
#include <string>

class Manager:public Employee
{
private:
	int bonus;
	


public:
	Manager();
	Manager(string name, int age, bool gender, string no, int salary, string department, int bonus);
	~Manager();

	void print()const;
};

