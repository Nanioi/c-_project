#include "Manager.h"


Manager::Manager()
{
}

Manager::Manager(string name, int age, bool gender, string no, int salary, string department, int bonus)
{
	this->name = name;
	this->age = age;
	this->gender = gender;
	this->no = no;
	this->salary = salary;
	this->department = department;
	this->bonus = bonus;
}

Manager::~Manager()
{
}

void Manager::print() const
{
	cout << "이름" << "\t" <<":"<< name << endl;
	cout << "나이" << "\t" << ":"<<age << endl;
	cout << "성별" << "\t" << ":"<<gender << endl;
	cout << "사변" << "\t" << ":"<<no << endl;
	cout << "급이" << "\t" << ":"<<salary << endl;
	cout << "부서" << "\t" << ":"<<department << endl;
	cout << "보너스" << "\t" << ":"<<bonus << endl;
}
