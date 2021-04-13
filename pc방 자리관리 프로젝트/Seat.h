#pragma once
#include<iostream>
using namespace std;

class Seat
{
protected:
	int m_nSeat;
	int m_nSeatNumber[500];
public:
	Seat();
	Seat(int);

	int getSeat() { return m_nSeat; }
	void setSeat(int seat) { m_nSeat = seat; }

	void chooseSeat();		//좌석선택
	void exitSeat();			//사용종료
	void moveSeat();	//자리이동

	void prn();
};
