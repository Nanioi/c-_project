#include<iostream>
using namespace std;

class Complex
{
	//member variables
private:
	int real;
	int image;

	//member functions
public:
	//accessor
	/*****************
	function name : GetReal()
	pre-condition : NONE -> parameter에 대한 설명
	post-condition : real (값)	//리턴값, 출력값(void 타입이면 none)
	description :
	*****************/

	Complex();	//생성자는 멤버변수 초기화시킴
	Complex(int r, int i);
	//~Complex();	//소멸자
	int GetReal() const {return real;}
	int GetImage() const {return image;}

	//mutator
	void SetReal(int r) {real=r;}	//생성자가 따로 없어서 컴파일러가 기본생성자 하나를 만들어줌(위에 Complex(); 를 썼다고 생각함)
	void SetImage(int i) {image=i;}
	void SetComplex(int r, int i)
	{
		real=r; image=i;
	}
	

	//function
	void ShowComplex() const;	//const = 값 변경 불가
	void ShowComplex(int real=0, int image=0); //디폴트 parameter
	
	//Complex Sum(Complex);
	//friend Complex Sum(Complex, Complex);
	Complex operator+(const Complex&) const;
	//friend Complex operator+(Complex, Complex);

	Complex Sub(Complex);
	friend Complex Sub(Complex, Complex);
	Complex operator-(const Complex&) const;	//다항연산
	Complex operator-() const;	//단항연산
};