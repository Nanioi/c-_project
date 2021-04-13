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
		cout << seat->m_nSeatNumber << "번 자리에서 콜라를 주문하셨습니다." << endl;
	else if (n == 2)
		cout << seat->m_nSeatNumber << "번 자리에서 사이다를 주문하셨습니다." << endl;
	else if (n == 3)
		cout << seat->m_nSeatNumber << "번 자리에서 아이스티를 주문하셨습니다." << endl;
	else if (n == 4)
		cout << seat->m_nSeatNumber << "번 자리에서 주스를 주문하셨습니다." << endl;
}
