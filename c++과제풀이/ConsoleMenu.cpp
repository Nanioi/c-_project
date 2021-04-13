#include"ConsoleMenu.h"
#include<iostream>
using namespace std;

ConsoleMenu::ConsoleMenu()
{
	m_Title = "";
	m_nMenuCnt = 0;
	m_nAddCnt = 0;
}

ConsoleMenu::ConsoleMenu(string T)
{
	m_Title = T;
}

ConsoleMenu::ConsoleMenu(int n1)
{
	m_Menu[n1] = m_Title;
}

bool ConsoleMenu::AddMenu(string T)
{
	m_Title = T;
	return true;
}

bool ConsoleMenu::RemoveMenu(int n2)
{
	m_Menu[n2] = m_Title;
	return true;
}

bool ConsoleMenu::RemoveMenu(string T2)
{
	if (m_Title == T2)
	{
		m_Title = "";
		return true;
	}
	else
		return false;
}

bool ConsoleMenu::UpdateMenu(int n3, string T3)
{
	m_Menu[n3] = T3;
	return true;
}