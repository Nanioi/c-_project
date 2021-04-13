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
	cout << "�̸�" << "\t" <<":"<< name << endl;
	cout << "����" << "\t" << ":"<<age << endl;
	cout << "����" << "\t" << ":"<<gender << endl;
	cout << "�纯" << "\t" << ":"<<no << endl;
	cout << "����" << "\t" << ":"<<salary << endl;
	cout << "�μ�" << "\t" << ":"<<department << endl;
	cout << "���ʽ�" << "\t" << ":"<<bonus << endl;
}
