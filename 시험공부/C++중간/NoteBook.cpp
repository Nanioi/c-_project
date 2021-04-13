#include "NoteBook.h"

ostream & operator<<(ostream & os, const NoteBook & Nobj)
{
	os << "������(<<operator) :" << Nobj.price << endl;
	return os;
	
}

NoteBook::NoteBook()
{
	price = 1000;
	total++;
}

NoteBook::NoteBook(int p) :NoteBook()
{
	this->price = p;
}

NoteBook::~NoteBook()
{
	total--;
}


void NoteBook::PrintPrice()const
{
	cout << "������(PrintPrice) : " << price << endl;
}

void NoteBook::Show() const
{
	cout << "�⺻������" << endl;
}

NoteBook NoteBook::operator+(const NoteBook &right)const
{
	NoteBook P;
	P.price = this->price + right.price;

	return P;
}

NoteBook NoteBook::operator-(const NoteBook &right) const
{
	NoteBook P;
	P.price = this->price - right.price;

	return P;
}

NoteBook NoteBook::operator*(const NoteBook &right) const
{
	NoteBook P;
	P.price = this->price * right.price;

	return P;
}

NoteBook NoteBook::operator/(const NoteBook &right) const
{
	NoteBook P;
	P.price = this->price / right.price;

	return P;
}

NoteBook NoteBook::operator-() const
{
	NoteBook Result;
	Result.price = this->price*-1;

	return Result;
}

void NoteBook::TotalUser()
{
	cout << "������ ��Ʈ�� ���� : "<<total << endl;
}
int NoteBook::total = 0;

