#include "Food.h"

Food::Food() :Seat()
{
}

Food::~Food()
{
}

void Food::prn()
{
	int choose;
	cout << "[1]Snack [2]Drink" << endl;
	cout << "→";
	cin >> choose;
	cout << endl;
	if (choose == 1)
	{
		cout << "Snack 메뉴" << endl;
		cout << "================\n[1] 과자\n[2] 라면\n[3] 소세지\n================" << endl;
		cout << "→";
		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << "과자를 주문하셨습니다." << endl << endl;
			break;
		case 2:
			cout << "라면를 주문하셨습니다." << endl << endl;
			break;
		case 3:
			cout << "소세지를 주문하셨습니다." << endl << endl;
			break;
		}
	}
	else if (choose == 2)
	{
		cout << "Drink 메뉴" << endl;
		cout << "================\n[1] 콜라\n[2] 사이다\n[3] 아이스티\n[4] 주스\n================" << endl;
		cout << "→";
		cin >> choose;
		cout << endl;
		switch (choose)
		{
		case 1:
			cout << "콜라를 주문하셨습니다." << endl << endl;
			break;
		case 2:
			cout << "사이다를 주문하셨습니다." << endl << endl;
			break;
		case 3:
			cout << "아이스티를 주문하셨습니다." << endl << endl;
			break;
		case 4:
			cout << "주스를 주문하셨습니다." << endl << endl;
			break;
		}
	}
}
