#pragma once
#include <iostream>
using namespace std;
#include <string>

class Product
{
	Product *product;
//	int total = 0;
protected:
	int id=0;
	string ProductIF;
	string producter;
	int Price;

public:
	Product();
	Product(string, string, int);
	~Product();

	virtual void Print();
	void addProduct(Product *product);


};

