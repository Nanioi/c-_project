#include "Snack.h"
#include "Seat.h"


Snack::Snack(Seat *s)
{
	cracker = 1;
	ramen = 2;
	sausage = 3;
}


Snack::~Snack()
{
}

void Snack::print(int n)
{
	if (n == 1)
		cout << seat->m_nSeatNumber << "�� �ڸ����� ���ڸ� �ֹ��ϼ̽��ϴ�." << endl;
	else if (n == 2)
		cout << seat->m_nSeatNumber << "�� �ڸ����� ��鸦 �ֹ��ϼ̽��ϴ�." << endl;
	else if (n == 3)
		cout << seat->m_nSeatNumber << "�� �ڸ����� �Ҽ����� �ֹ��ϼ̽��ϴ�." << endl;
}
