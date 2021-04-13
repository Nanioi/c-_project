#include"InkjetPrinter.h"
#include"Printer.h"

void main()
{
	Printer printer;
	InkjetPrinter ink;
	ink.SetAvailableInk(100);
	cout<<ink;

	
}