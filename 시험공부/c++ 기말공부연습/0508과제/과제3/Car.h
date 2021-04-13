#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	string model;
	string color;

public:
	Car();
	Car(string model, string color);
	~Car();


	
	void prn()const;
};

