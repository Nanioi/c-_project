#include "Product.h"



Product::Product()
{
	product = new Product[100]();
	proset(product, 0, sizeof(product));

}

Product::Product( string ProductIF, string producter, int Price)
{
	this->ProductIF = ProductIF;
	this->producter = producter;
	this->Price = Price;
}


Product::~Product()
{
	product--;
}


void Product::Print()
{
	cout << "상품설명";
}

void Product::addProduct(Product * product)
{
	this->product[this->id++] = *product;
}
