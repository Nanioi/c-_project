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
	cout << "회원 금액은 30분에 500원" << endl;
	cout << "비회원 금액은 30분에 700원" << endl << endl;
}

void Price_Time::pay()
{
	cout << "지불할 금액 : ";
	cout << "→";
	cin >> m_nPrice;
	cout << "남은 시간 : " << (m_nPrice / 500) * 30 << "분" << endl << endl;
}

void Price_Time::nonMemberPay()
{
	cout << "지불할 금액 : ";
	cout << "→";
	cin >> m_nPrice;
	cout << "남은 시간 : " << (m_nPrice / 700) * 30 << "분" << endl << endl;
}

void Price_Time::Add()
{
	int add;
	cout << "얼마를 추가 하시겠습니까 : ";
	cout << "→";
	cin >> add;
	m_nPrice = m_nPrice + add;
	cout << "총 지불 금액 : " << m_nPrice << "원" << endl;
	cout << "남은 시간 : " << (m_nPrice / 500) * 30 << "분" << endl << endl;
}

void Price_Time::nonMemberAdd()
{
	int add;
	cout << "얼마를 추가 하시겠습니까 : ";
	cout << "→";
	cin >> add;
	m_nPrice = m_nPrice + add;
	cout << "총 지불 금액 : " << m_nPrice << "원" << endl;
	cout << "남은 시간 : " << (m_nPrice / 700) * 30 << "분" << endl << endl;
}

void Price_Time::refund()
{
	if (m_nPrice == 0)
	{
		cout << "환불할 금액이 없습니다." << endl << endl;
	}
	else
	{
		cout << m_nPrice << "원을 돌려받았습니다." << endl << endl;
		m_nPrice = 0;
	}
}

