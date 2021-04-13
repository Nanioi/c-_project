#include<iostream>
using namespace std;

class CRect
{
private :
	//member variables
	int left, top, right, bottom;
	
public :
	//member functions
	//1. 생성자 만들기
	CRect();
	CRect(int, int, int, int);	//parameter 생성자, 선언부분이라 타입만 명시해도 된다
	
	//2. get/ set 함수 만들기
	int GetLeft()	{		return left;	}
	int GetTop()	{		return top;		}
	int GetRight()	{		return right;	}
	int GetBottom()	{		return bottom;	}

	int SetLeft(int l)		{	left=l;		}	
	int SetTop(int t)		{	top=t;		}
	int SetRight(int r)		{	right=r;	}
	int SetBottom(int b)	{	bottom=b;	}	

	void setData(int, int, int, int);

	//3. 기능적인 멤버함수 제공
	int GetWidth();
	int GetHeight();
	int CalcArea();
	int CalCPerimeter();
		
	//4. 출력
	void Print();
}