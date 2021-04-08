#pragma once
#include<iostream>
#include<string>
using namespace std;

class Information
{
protected:
	string m_strID;
	string m_strPW;
	string m_strName;
	int m_nBirth;
	int m_nPhoneNumber;

public:
	Information();

	string getID() const { return m_strID; }
	string getPW() { return m_strPW; }
	string getName() { return m_strName; }
	int getBirth() { return m_nBirth; }
	int getPhoneNumber() { return m_nPhoneNumber; }

	void setID(string id) { m_strID = id; }
	void setPW(string pw) { m_strPW = pw; }
	void setName(string name) { m_strName = name; }
	void setBirth(int birth) { m_nBirth = birth; }
	void setPhoneNumber(int phoneNumber) { m_nPhoneNumber = phoneNumber; }

	Information joinMember()
	{
		Information i;
		string pwCheck;
		cout << "ID\t: ";
		cin >> i.m_strID;

		cout << "PW\t: ";
		cin >> i.m_strPW;

		cout << "PW확인\t: ";
		cin >> pwCheck;
		if (i.m_strPW == pwCheck)
		{
			cout << "비밀번호가 일치합니다." << endl;

			cout << "이름\t: ";
			cin >> i.m_strName;

			cout << "생년월일: ";
			cin >> i.m_nBirth;

			cout << "휴대폰 번호: ";
			cin >> i.m_nPhoneNumber;

			cout << "[" << i.m_strName << "]님의 회원가입이 완료 되었습니다." << endl << endl;
		}
		else
		{
			cout << "비밀번호가 틀립니다." << endl << endl;
		}
		return i;
	}

	void Login();
	void findID();
	void findPW();
};