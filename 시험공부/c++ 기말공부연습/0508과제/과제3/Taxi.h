#pragma once
#include "Car.h"

class Taxi:public Car
{
	bool meter;
	int fare = 2000;

public:
	Taxi();
	Taxi(string model, string color, bool meter, int fare);
	Taxi(string model, string color);
	~Taxi();

	void power()const;
	void prn()const;
};

