#pragma once
#include <iostream>
#include <string>
using namespace std;

class Member
{
protected:
	string name;
	int HB;
	int PhoneNum;
	int ID;
	int PW;

public:
	Member() :name(""), HB(0), PhoneNum(0), ID(0), PW(0) {};
	Member(string name, int HB, int PhoneNum, int ID, int PW);
	~Member();

	void setName(string name) { this->name = name; };
	string getName() { return name; };
	void setID(int id) { this->ID = id; };
	int getID() { return ID; };
	void setHB(int HB) { this->HB = HB; };
	int getHB() { return HB; };
	void setPW(int PW) { this->PW = PW; };
	int getPW() { return PW; };
	void setPhoneNum(int PhoneNum) { this->PhoneNum = PhoneNum; };
	int getPhoneNum() { return PhoneNum; };


};

