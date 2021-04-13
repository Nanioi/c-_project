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
	bool AddMenu(string); //add가 실행되면 true를 안되면 false를 출력하기
	bool RemoveMenu(int); //배열 인덱스로 찾고 삭제하기
	bool RemoveMenu(string); //문자열로 찾고 삭제
	bool UpdateMenu(int, string);//인덱스 위치에 문자열을 업데이트하기
	
	int RetrieveMenu(string)
	    {

	    };

	//4.출력하기
	void DisplayMenu()
	     {
		      cout << "Title : " << m_Title << endl;
		      cout << "Menu Cnt : " << m_nMenuCnt << endl;
		      cout << "Add Cnt : " << m_nAddCnt<< endl;
	     }

private:
	int inputMenu();

	//내부에서만 호출가능
};
