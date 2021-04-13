#include "Member.h"


Member::Member(string name, int HB, int PhoneNum, int ID, int PW)
{
	this->name = name;
	this->HB = HB;
	this->PhoneNum=PhoneNum;
	this->ID= ID;
	this->PW = PW;
}

Member::~Member()
{
}

