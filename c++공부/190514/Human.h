#include<iostream>
#pragma once
using namespace std;

class Human
{
	char name[20];
	int age;

public:
	Human(char *name, int age);
	void setName(char *name);
	void setAge(int age);
	void prn();
};