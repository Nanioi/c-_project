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
		cout << "Snack �޴�" << endl;
		cout << "[1] ���� [2] ��� [3]�Ҽ���" << endl;
	}
	else if(n == 2)
	{
		cout << "Drink �޴�" << endl;
		cout << "[1]�ݶ� [2]���̴� [3]���̽�Ƽ [4]�ֽ�" << endl;
	}
}
