#include<fstream>
#include<iostream>
using namespace std;

void main()
{
	ifstream fin;
	ofstream fout;

	char ch;

	fin.open("asdf.cpp");
	fout.open("dddd.cpp");

	if(fin.fail() || fout.fail())
	{
		cout<<"fail"<<endl;
		return;
	}

	while(fin.get(ch))
		fout.put(ch);

	fin.close();
	fout.close();
}