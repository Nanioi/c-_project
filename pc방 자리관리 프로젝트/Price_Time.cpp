#include"Price_Time.h"

Price_Time::Price_Time()
{
	m_nPrice = 0;
}

Price_Time::Price_Time(int price)
{
	m_nPrice = price;
}

void Price_Time::prn()
{
	cout << "ȸ�� �ݾ��� 30�п� 500��" << endl;
	cout << "��ȸ�� �ݾ��� 30�п� 700��" << endl << endl;
}

void Price_Time::pay()
{
	cout << "������ �ݾ� : ";
	cout << "��";
	cin >> m_nPrice;
	cout << "���� �ð� : " << (m_nPrice / 500) * 30 << "��" << endl << endl;
}

void Price_Time::nonMemberPay()
{
	cout << "������ �ݾ� : ";
	cout << "��";
	cin >> m_nPrice;
	cout << "���� �ð� : " << (m_nPrice / 700) * 30 << "��" << endl << endl;
}

void Price_Time::Add()
{
	int add;
	cout << "�󸶸� �߰� �Ͻðڽ��ϱ� : ";
	cout << "��";
	cin >> add;
	m_nPrice = m_nPrice + add;
	cout << "�� ���� �ݾ� : " << m_nPrice << "��" << endl;
	cout << "���� �ð� : " << (m_nPrice / 500) * 30 << "��" << endl << endl;
}

void Price_Time::nonMemberAdd()
{
	int add;
	cout << "�󸶸� �߰� �Ͻðڽ��ϱ� : ";
	cout << "��";
	cin >> add;
	m_nPrice = m_nPrice + add;
	cout << "�� ���� �ݾ� : " << m_nPrice << "��" << endl;
	cout << "���� �ð� : " << (m_nPrice / 700) * 30 << "��" << endl << endl;
}

void Price_Time::refund()
{
	if (m_nPrice == 0)
	{
		cout << "ȯ���� �ݾ��� �����ϴ�." << endl << endl;
	}
	else
	{
		cout << m_nPrice << "���� �����޾ҽ��ϴ�." << endl << endl;
		m_nPrice = 0;
	}
}

