#pragma once
#include <iostream>
#include"Seat.h"

using namespace std;

class Food :public Seat
{
private:
	Seat seat;
public:
	Food();
	~Food();
	virtual void prn();
	Seat mySeat()
	{

	}
};

