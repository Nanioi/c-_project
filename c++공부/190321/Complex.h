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
	pre-condition : NONE -> parameter�� ���� ����
	post-condition : real (��)	//���ϰ�, ��°�(void Ÿ���̸� none)
	description :
	*****************/

	Complex();	//�����ڴ� ������� �ʱ�ȭ��Ŵ
	Complex(int r, int i);
	//~Complex();	//�Ҹ���
	int GetReal() const {return real;}
	int GetImage() const {return image;}

	//mutator
	void SetReal(int r) {real=r;}	//�����ڰ� ���� ��� �����Ϸ��� �⺻������ �ϳ��� �������(���� Complex(); �� ��ٰ� ������)
	void SetImage(int i) {image=i;}
	void SetComplex(int r, int i)
	{
		real=r; image=i;
	}
	

	//function
	void ShowComplex() const;	//const = �� ���� �Ұ�
	void ShowComplex(int real=0, int image=0); //����Ʈ parameter
	
	//Complex Sum(Complex);
	//friend Complex Sum(Complex, Complex);
	Complex operator+(const Complex&) const;
	//friend Complex operator+(Complex, Complex);

	Complex Sub(Complex);
	friend Complex Sub(Complex, Complex);
	Complex operator-(const Complex&) const;	//���׿���
	Complex operator-() const;	//���׿���
};