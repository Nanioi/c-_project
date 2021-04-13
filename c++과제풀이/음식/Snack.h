#pragma once
#include <iostream>
#include "Food.h"
#include "Seat.h"
using namespace std;

class Snack:Food
{
private :
	Seat * seat;
protected:
	int cracker;
	int ramen;
	int sausage;

public:
	Snack(Seat *s){ this->seat = s; };
	~Snack();

	virtual void print(int s);
};

