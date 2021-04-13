#pragma once
#include <iostream>
#include "Food.h"
#include "Seat.h"
using namespace std;

class Drink:Food
{
private:
	Seat * seat;

protected:
	int cola;
	int soda;
	int icetea;
	int juice;

public:
	Drink(Seat *s) { this->seat = s; };
	~Drink();

	virtual void print(int n);
};

