#include"Printer.h"

class InkjetPrinter : Printer
{
private : int nAvailableInk;

public: InkjetPrinter();
		~InkjetPrinter();

		void SetAvailableInk(int ink) {nAvailableInk=ink;}
			int GetAvailableInk() {return nAvailableInk;}

	void print(int);

};