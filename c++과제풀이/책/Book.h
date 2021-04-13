#pragma once
#include <iostream>
using namespace std;
#include "Product.h"

class Book
{
protected:
	int ISBN;
	string writer;
	string Btitle;
public:
	Book();
	~Book();
	/*Member() :name(""), HB(0), PhoneNum(0), ID(0), PW(0) {};
	Member(string name, int HB, int PhoneNum, int ID, int PW);
	~Member();
	*/
	void setISBN(int ISBN) { this->ISBN = ISBN; };
	int getISBN() { return ISBN; };
	void setISBN(string writer) { this->writer = writer; };
	string getwriter() { return writer; };
	void setBtitle(int Btitle) { this->Btitle= Btitle; };
	string getBtitle() { return Btitle; };




};

