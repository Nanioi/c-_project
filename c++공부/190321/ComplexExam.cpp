#include<iostream>
using namespace std;
#include"Complex.h"

Complex Sum(Complex left, Complex right)	//friend 함수
{
	Complex result;

	result.real=left.real+right.real;
	result.image=left.image+right.image;

	return result;
}

int main()
{	/*
	Complex com1;	//선언 시 기본생성자가 선언되므로 Complex.cpp에서 선언한 초기화가 선언됨

	Complex com2(10,20); //parameter로 선언

	com1.ShowComplex();
	com2.ShowComplex();
	
	com1.SetReal(10);
	com1.SetImage(30);
	com2.SetReal(4);
	com2.SetImage(10);
	
	com1.ShowComplex(); //실행시 0이 나오는것은 디폴트parameter가 호출됌
	com2.ShowComplex(); //오버로드 사용시에는 디폴트parameter를 사용하면 안된다. 지금처럼 0으로 호출됌

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