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
		cout << "[" << m_strName << "] ȸ������ �湮�� ȯ���մϴ�." << endl;
	}
	else
	{
		cout << "�Է��Ͻ� ������ ��ġ���� �ʽ��ϴ�." << endl;
		goto AA;
	}
}

void Information::findID()
{
	cout << "[" << m_strName << "]ȸ������ ID�� '" << m_strID << "' �Դϴ�." << endl << endl;
}

void Information::findPW()
{
	int ph;
	aa:cout << "�޴��� ��ȣ : ";
	cin >> ph;
	if (m_nPhoneNumber == ph)
	{
		cout << "[" << m_strName << "]ȸ������ ��й�ȣ�� '" << m_strPW << "' �Դϴ�." << endl << endl;
	}
	else
	{
		cout << "�޴��� ��ȣ�� ��Ȯ�ϰ� �Է��ϼ���." << endl;
		goto aa;
	}
}