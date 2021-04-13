#pragma once
#include<iostream>
#include<string>
#include"Information.h"
using namespace std;

class Member
{
	Information data[100];
	int count;
public:
	Member();

	bool add(const Information user);

	bool checkLogin(const Information user);

	Information checkID()	//입력한 id가 등록되어 있는 id와 동일한지 확인
	{
		string id;
	aa:	cout << "ID : ";
		cin >> id;
		for (int i = 0; i < count; i++)
		{
			if (data[i].getID() == id)
			{
				return data[i];
			}
			else
			{
				cout << "ID가 일치하지 않습니다." << endl;
				goto aa;
			}
		}
	}

	Information checkName()	//입력한 이름이 등록되어 있는 이름과 동일한지 확인
	{
		string name;
	bb:	cout << "이름 : ";
		cin >> name;
		for (int i = 0; i < count; i++)
		{
			if (data[i].getName() == name)
			{
				return data[i];
			}
			else
			{
				cout << "이름을 정확하게 입력하세요." << endl;
				goto bb;
			}
		}
	}


};