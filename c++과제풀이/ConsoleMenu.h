#include<iostream>
#include<string>
#pragma once

using namespace std;

class ConsoleMenu
{
private:
	string m_Title;
	string m_Menu[10];

	int m_nMenuCnt;
	int m_nAddCnt;

public:
	//1.constructor
	ConsoleMenu();
	ConsoleMenu(string title);
	ConsoleMenu(int);
	//member valuables

	//2.get/set functions
	string GetTitle() const { return m_Title; }
	int GetMenuCnt() const { return m_nMenuCnt; }
	int GetAddCnt() const { return m_nAddCnt; }
	void SetTitle(string title) { m_Title = title; }
	void SetMenuCnt(int cnt) {m_nMenuCnt = cnt;	}

	//3. functionality
	bool AddMenu(string); //add�� ����Ǹ� true�� �ȵǸ� false�� ����ϱ�
	bool RemoveMenu(int); //�迭 �ε����� ã�� �����ϱ�
	bool RemoveMenu(string); //���ڿ��� ã�� ����
	bool UpdateMenu(int, string);//�ε��� ��ġ�� ���ڿ��� ������Ʈ�ϱ�
	
	int RetrieveMenu(string)
	    {

	    };

	//4.����ϱ�
	void DisplayMenu()
	     {
		      cout << "Title : " << m_Title << endl;
		      cout << "Menu Cnt : " << m_nMenuCnt << endl;
		      cout << "Add Cnt : " << m_nAddCnt<< endl;
	     }

private:
	int inputMenu();

	//���ο����� ȣ�Ⱑ��
};
