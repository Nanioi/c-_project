#include "NoteBook.h"

ostream & operator<<(ostream & os, const NoteBook & Nobj)
{
	os << "가격은(<<operator) :" << Nobj.price << endl;
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
	cout << "가격은(PrintPrice) : " << price << endl;
}

void NoteBook::Show() const
{
	cout << "기본이지롱" << endl;
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
	cout << "생성된 노트북 개수 : "<<total << endl;
}
int NoteBook::total = 0;

