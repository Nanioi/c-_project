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
	cout << "��";
	cin >> choose;
	cout << endl;
	if (choose == 1)
	{
		cout << "Snack �޴�" << endl;
		cout << "================\n[1] ����\n[2] ���\n[3] �Ҽ���\n================" << endl;
		cout << "��";
		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << "���ڸ� �ֹ��ϼ̽��ϴ�." << endl << endl;
			break;
		case 2:
			cout << "��鸦 �ֹ��ϼ̽��ϴ�." << endl << endl;
			break;
		case 3:
			cout << "�Ҽ����� �ֹ��ϼ̽��ϴ�." << endl << endl;
			break;
		}
	}
	else if (choose == 2)
	{
		cout << "Drink �޴�" << endl;
		cout << "================\n[1] �ݶ�\n[2] ���̴�\n[3] ���̽�Ƽ\n[4] �ֽ�\n================" << endl;
		cout << "��";
		cin >> choose;
		cout << endl;
		switch (choose)
		{
		case 1:
			cout << "�ݶ� �ֹ��ϼ̽��ϴ�." << endl << endl;
			break;
		case 2:
			cout << "���̴ٸ� �ֹ��ϼ̽��ϴ�." << endl << endl;
			break;
		case 3:
			cout << "���̽�Ƽ�� �ֹ��ϼ̽��ϴ�." << endl << endl;
			break;
		case 4:
			cout << "�ֽ��� �ֹ��ϼ̽��ϴ�." << endl << endl;
			break;
		}
	}
}
