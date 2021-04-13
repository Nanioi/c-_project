#include"Information.h"

Information::Information()
{

}

void Information::Login()
{
	string pw;
	AA:cout << "PW : ";
	cin >> pw;
	if (m_strPW == pw)
	{
		cout << "[" << m_strName << "] 회원님의 방문을 환영합니다." << endl;
	}
	else
	{
		cout << "입력하신 정보가 일치하지 않습니다." << endl;
		goto AA;
	}
}

void Information::findID()
{
	cout << "[" << m_strName << "]회원님의 ID는 '" << m_strID << "' 입니다." << endl << endl;
}

void Information::findPW()
{
	int ph;
	aa:cout << "휴대폰 번호 : ";
	cin >> ph;
	if (m_nPhoneNumber == ph)
	{
		cout << "[" << m_strName << "]회원님의 비밀번호는 '" << m_strPW << "' 입니다." << endl << endl;
	}
	else
	{
		cout << "휴대폰 번호를 정확하게 입력하세요." << endl;
		goto aa;
	}
}