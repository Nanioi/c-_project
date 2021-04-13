//Implementation Level

#include "BeverageMaker.h"

BeverageMaker::BeverageMaker() :Sugar(0), Shot(0)
{
	MachineCnt++;
}
BeverageMaker::BeverageMaker(int s, int h) : Sugar(s), Shot(h)
{
}
BeverageMaker::~BeverageMaker()
{
	MachineCnt--;
}

void BeverageMaker::ShowBeverageMaker() const
{
	cout << "¼³ÅÁ : " << Sugar << endl;
	cout << "¼¦ : " << Shot << endl;

}//ShowBeverageMaker()

void BeverageMaker::SSAddSub(int s, int h)
{

	cout << "¼¦ Ãß°¡ÇØÁÖ¼¼¿ä: ";
	Shot += h;
	cout << Shot << endl;
	cout << "¼³ÅÁ »©ÁÖ¼¼¿ä: ";
	Sugar -= s;
	cout << Sugar << endl;
}

BeverageMaker BeverageMaker::operator+(const BeverageMaker &right) const {
	
	BeverageMaker result;

	result.Sugar = this->Sugar + right.Sugar;
	result.Shot = this->Shot + right.Shot;

	return result;
}

BeverageMaker BeverageMaker::operator-(const BeverageMaker &) const
{
	return BeverageMaker();
}

BeverageMaker BeverageMaker ::operator-() const
{
	BeverageMaker result;
	result.Sugar = this->Sugar*-1;
	result.Shot = this->Shot*-1;
	return result;

}
BeverageMaker BeverageMaker::operator-()
{
	this->Sugar *= -1;
	this->Shot *= -1;
	return *this;
}


void BeverageMaker::MachineCntAdd()
{
	MachineCnt++;
}

BeverageMaker BeverageMaker::operator/(const BeverageMaker &) const
{
	return BeverageMaker();
}

int BeverageMaker::MachineCnt = 0;



