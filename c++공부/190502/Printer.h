#include<iostream>
#include<string>

class Printer
{protected : string strModel;
			string strManufacturer;
			int nPrintedCount;
			int nAvailableCount;

public :Printer();
		~Printer();
		//get
		//set
		int getPrintedCount() {return nPrintedCount;}
		void Print(int);
};