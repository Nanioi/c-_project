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
		cout << seat->m_nSeatNumber << "번 자리에서 과자를 주문하셨습니다." << endl;
	else if (n == 2)
		cout << seat->m_nSeatNumber << "번 자리에서 라면를 주문하셨습니다." << endl;
	else if (n == 3)
		cout << seat->m_nSeatNumber << "번 자리에서 소세지를 주문하셨습니다." << endl;
}
