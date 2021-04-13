#include<iostream>
using namespace std;

class CRect
{
private :
	//member variables
	int left, top, right, bottom;
	
public :
	//member functions
	//1. ������ �����
	CRect();
	CRect(int, int, int, int);	//parameter ������, ����κ��̶� Ÿ�Ը� ����ص� �ȴ�
	
	//2. get/ set �Լ� �����
	int GetLeft()	{		return left;	}
	int GetTop()	{		return top;		}
	int GetRight()	{		return right;	}
	int GetBottom()	{		return bottom;	}

	int SetLeft(int l)		{	left=l;		}	
	int SetTop(int t)		{	top=t;		}
	int SetRight(int r)		{	right=r;	}
	int SetBottom(int b)	{	bottom=b;	}	

	void setData(int, int, int, int);

	//3. ������� ����Լ� ����
	int GetWidth();
	int GetHeight();
	int CalcArea();
	int CalCPerimeter();
		
	//4. ���
	void Print();
}