#include<iostream>
using namespace std;
#include"Complex.h"

Complex Sum(Complex left, Complex right)	//friend �Լ�
{
	Complex result;

	result.real=left.real+right.real;
	result.image=left.image+right.image;

	return result;
}

int main()
{	/*
	Complex com1;	//���� �� �⺻�����ڰ� ����ǹǷ� Complex.cpp���� ������ �ʱ�ȭ�� �����

	Complex com2(10,20); //parameter�� ����

	com1.ShowComplex();
	com2.ShowComplex();
	
	com1.SetReal(10);
	com1.SetImage(30);
	com2.SetReal(4);
	com2.SetImage(10);
	
	com1.ShowComplex(); //����� 0�� �����°��� ����Ʈparameter�� ȣ���
	com2.ShowComplex(); //�����ε� ���ÿ��� ����Ʈparameter�� ����ϸ� �ȵȴ�. ����ó�� 0���� ȣ���

	com1.ShowComplex(2, 6);
	com2.ShowComplex(33);

	cout << "Com1 + Com2 : " <<com1.GetReal()+com2.GetReal() << " + " <<com1.GetImage()+com2.GetImage() << "i" << endl;
	*/

	Complex x(10,20), y(15,30), z;


	x.SetReal(100);
	x.ShowComplex();

	//z=x.Sum(y);
	z.ShowComplex();
	


	//z=Sum(x,y);
	//z.ShowComplex();
	
	//z=x.Sub(y);
	//z.ShowComplex();

	//z=Sub(x,y);
	//z.ShowComplex();


	//z=x-y;
	//z.ShowComplex();

	//z=-z;
	//z.ShowComplex();
	return 0;

}