#include<vector>
#include<iostream>
using namespace std;

int main()
{
	vector <int>::iterator iter;
	vector <int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	iter = v.begin();

	cout<<"1 : "<<*iter<<endl;

	*iter = 15;

	cout<<"1 �� �����"<<v[0]<<endl;
	cout<<"1.2 �� �����"<<*iter<<endl;

	*iter++;

	cout<<"1 ������ "<<*iter<<endl;

	cout<<"\n �������"<<endl;

	for(iter=v.begin(); iter!=v.end(); iter++)
	{
		cout<<"   "<<*iter;
	}

	cout<<"\n"<<endl;

	for(int i=0; i<4; i++)
	{
		cout<<v[i]<<"  "<<endl;
	}

	return 0;
}