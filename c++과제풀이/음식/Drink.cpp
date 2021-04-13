#include "Drink.h"
#include "Seat.h"

Drink::Drink(Seat *s)
{
	cola = 1;
	soda = 2;
	icetea = 3;
	juice = 4;
}


Drink::~Drink()
{
}

void Drink::print(int n)
{
	if (n == 1)
		cout << seat->m_nSeatNumber << "�� �ڸ����� �ݶ� �ֹ��ϼ̽��ϴ�." << endl;
	else if (n == 2)
		cout << seat->m_nSeatNumber << "�� �ڸ����� ���̴ٸ� �ֹ��ϼ̽��ϴ�." << endl;
	else if (n == 3)
		cout << seat->m_nSeatNumber << "�� �ڸ����� ���̽�Ƽ�� �ֹ��ϼ̽��ϴ�." << endl;
	else if (n == 4)
		cout << seat->m_nSeatNumber << "�� �ڸ����� �ֽ��� �ֹ��ϼ̽��ϴ�." << endl;
}
