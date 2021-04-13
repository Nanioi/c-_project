#pragma once
#include <iostream>
using namespace std;

class NoteBook
{
protected:
	int price;

public:
	
	static int total;
	friend ostream& operator<<(ostream & os, const NoteBook & NObj);
	NoteBook();
	NoteBook(int p);
	virtual ~NoteBook();

	int GetPrice()const { return price; }
	void SetPrice(int p) { price = p; }

	void PrintPrice()const;
	virtual void Show()const;

	 NoteBook operator+(const NoteBook &)const;
	NoteBook operator-(const NoteBook &)const;
	NoteBook operator*(const NoteBook &)const;
	NoteBook operator/(const NoteBook &)const;
	 NoteBook operator-()const;

	static void TotalUser();

};

