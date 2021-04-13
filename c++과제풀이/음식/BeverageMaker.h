#pragma once
#include <iostream>
using namespace std;

class BeverageMaker
{
	
	//member variables
private:
	int Sugar;
	int Shot;

public:
	static int MachineCnt;
	//constructir & destructor
	BeverageMaker();
	BeverageMaker(int s, int h);
	~BeverageMaker();

	//accessor
	int GetSugar() const { return Sugar; }
	int GetShot() const { return Shot; }

	//mutator
	void SetSugar(int s) { Sugar = s; }
	void SetShot(int h) { Shot = h; }
	void SetIcetea(int s, int h)
	{
		Sugar = s; Shot = h;
	}

	//function
	void ShowBeverageMaker() const;
	void SSAddSub(int s, int h);

	//operator functions
	BeverageMaker operator+(const BeverageMaker &)const;
	BeverageMaker operator-(const BeverageMaker &)const;
	BeverageMaker operator-() const;
	BeverageMaker operator-();
	BeverageMaker operator/(const BeverageMaker &) const;


	static void MachineCntAdd();
		
	
};
