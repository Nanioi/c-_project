#include"Human.h"
#include"UserError.h"

using namespace std;

void main()
{
	Human *p1, *p2, *p3;

	try
	{
		p1=new Human("������1", 20);
	}
	catch(UserError a)
	{
		cout<<"UserError ����ó�� ����"<<endl;
	}

	try
	{
		p2=new Human("������222222", 10);
	}
	catch(UserError a)
	{
		cout<<"UserError ����ó�� ����"<<endl;
	}

	try
	{
		p3=new Human("������3", 220);
	}
	catch(UserError a)
	{
		cout<<"UserError ����ó�� ����"<<endl;
	}
}