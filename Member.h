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

	Information checkID()	//�Է��� id�� ��ϵǾ� �ִ� id�� �������� Ȯ��
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
				cout << "ID�� ��ġ���� �ʽ��ϴ�." << endl;
				goto aa;
			}
		}
	}

	Information checkName()	//�Է��� �̸��� ��ϵǾ� �ִ� �̸��� �������� Ȯ��
	{
		string name;
	bb:	cout << "�̸� : ";
		cin >> name;
		for (int i = 0; i < count; i++)
		{
			if (data[i].getName() == name)
			{
				return data[i];
			}
			else
			{
				cout << "�̸��� ��Ȯ�ϰ� �Է��ϼ���." << endl;
				goto bb;
			}
		}
	}


};