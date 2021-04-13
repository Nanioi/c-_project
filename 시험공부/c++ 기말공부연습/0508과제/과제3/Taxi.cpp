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
	cout << "�𵨸�" << "\t" << ":" << model << endl;
	cout << "����" << "\t" << ":" << color << endl;
	if (meter == false)
		cout << "���ͱⰡ �����ֽ��ϴ�." << endl;
	else
		cout << "���ͱⰡ Ŀ���ֽ��ϴ�." << endl;
}
