#include "Food.h"
#include "Seat.h"

Food::Food(Seat *s)
{
}


Food::~Food()
{
}

void Food::print(int n)
{
	if (n == 1)
	{
		cout << "Snack 메뉴" << endl;
		cout << "[1] 과자 [2] 라면 [3]소세지" << endl;
	}
	else if(n == 2)
	{
		cout << "Drink 메뉴" << endl;
		cout << "[1]콜라 [2]사이다 [3]아이스티 [4]주스" << endl;
	}
}
