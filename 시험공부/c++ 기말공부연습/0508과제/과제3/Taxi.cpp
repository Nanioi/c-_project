#include "Taxi.h"



Taxi::Taxi()
{
}

Taxi::Taxi(string model, string color, bool meter, int fare)
{
	this->model = model;
	this->color = color;
	this->meter = meter;
	this->fare = fare;
}

Taxi::Taxi(string model, string color) : Car(model,color)
{
	this->meter = false;
	this->fare = 2000;
	
}


Taxi::~Taxi()
{
}

void Taxi::power() const
{
}

void Taxi::prn() const
{
	cout << "모델명" << "\t" << ":" << model << endl;
	cout << "색상" << "\t" << ":" << color << endl;
	if (meter == false)
		cout << "미터기가 꺼져있습니다." << endl;
	else
		cout << "미터기가 커져있습니다." << endl;
}
