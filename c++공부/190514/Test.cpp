#include"Human.h"
#include"UserError.h"

using namespace std;

void main()
{
	Human *p1, *p2, *p3;

	try
	{
		p1=new Human("박형준1", 20);
	}
	catch(UserError a)
	{
		cout<<"UserError 예외처리 구문"<<endl;
	}

	try
	{
		p2=new Human("박형준222222", 10);
	}
	catch(UserError a)
	{
		cout<<"UserError 예외처리 구문"<<endl;
	}

	try
	{
		p3=new Human("박형준3", 220);
	}
	catch(UserError a)
	{
		cout<<"UserError 예외처리 구문"<<endl;
	}
}