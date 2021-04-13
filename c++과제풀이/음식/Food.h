#pragma once
#include <iostream>
using namespace std;

class Food
{
private:
	Seat * seat;
public:
	Food(Seat *s) { this->seat = s; };
	~Food();

	virtual void print(int n);
};

