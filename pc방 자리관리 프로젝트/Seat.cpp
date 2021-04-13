#include"Seat.h"

Seat::Seat()
{
	m_nSeat = 0;
	m_nSeatNumber[500] = 0;
}

Seat::Seat(int seat)
{
	m_nSeat = seat;
	for (int i = 1; i <= seat; i++)
	{
		m_nSeatNumber[i] = 0;
	}
}

void Seat::prn()
{
	cout << "전체 좌석수 : " << m_nSeat << endl << endl;
}

void Seat::chooseSeat()
{
	int choose;
	AA:	cout << "사용하실 좌석번호를 입력해 주세요. " << endl;
	cout << "→";
	cin >> choose;
	if (m_nSeatNumber[choose] == 0)
	{
		cout << choose << "번 좌석을 사용합니다." << endl << endl;
		m_nSeatNumber[choose] = 1;
		m_nSeat--;
	}
	else
	{
		cout << "사용중인 자리입니다." << endl;
		goto AA;
	}
}

void Seat::exitSeat()
{
	int exit;

	cout << "사용중인 좌석번호를 입력하세요. ";
	cout << "→";
	cin >> exit;
	if (m_nSeatNumber[exit] == 0)
	{
		cout << "사용중인 좌석번호를 정확히 입력하세요." << endl;
	}
	else
	{
		m_nSeatNumber[exit] = 0;
		cout << exit << "번 자리에서 사용을 종료합니다." << endl;
		m_nSeat++;
	}
}
void Seat::moveSeat()
{
	int mySeat_A;
	int mySeat_B;
	cout << "사용중인 좌석번호를 입력하세요. " << endl;
	cout << "→";
	cin >> mySeat_A;
	if (m_nSeatNumber[mySeat_A] == 0)
	{
		cout << "사용중인 좌석번호를 정확히 입력하세요." << endl;
	}
	else
	{
		cout << "이동하실 좌석번호를 입력하세요. " << endl;
		cout << "→";
		cin >> mySeat_B;
		if (m_nSeatNumber[mySeat_B] == 0)
		{
			m_nSeatNumber[mySeat_B] = m_nSeatNumber[mySeat_A];
			m_nSeatNumber[mySeat_A] = 0;
			cout << mySeat_A << "번 자리에서 " << mySeat_B << "번 자리로 이동되었습니다." << endl;
		}
		else
		{
			cout << "자리를 이동할 수 없습니다." << endl;
		}
	}
}