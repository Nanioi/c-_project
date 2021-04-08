#pragma once
#include<iostream>
using namespace std;

class Price_Time
{
private:
	int m_nPrice;
	int m_nTime;
public:
	Price_Time();
	Price_Time(int);

	int getPrice() { return m_nPrice; }
	int getTime() { return m_nTime; }
	void setPrice(int price) { m_nPrice = price; }
	void setTime(int time) { m_nTime = time; }

	void prn();
	void pay();
	void nonMemberPay();	//비회원
	void Add();
	void nonMemberAdd();	//비회원
	void refund();
};