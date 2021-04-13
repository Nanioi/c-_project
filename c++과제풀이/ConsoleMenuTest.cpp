#include<iostream>
#include "ConsoleMenu.h"
using namespace std;
#include<string>

void main()
{
	ConsoleMenu M1[10];
	ConsoleMenu M2[10];

	M1[0].AddMenu("Title1");
	M1[0].GetMenuCnt();
	M1[1].AddMenu("Title2");
	M1[2].AddMenu("Title3");
	M1[3].AddMenu("Title4");
	M1[10].RemoveMenu(1);

	for (int i = 0;i < 10;i++)
	{
		M1[i] = DisplayMenu();
	}

}