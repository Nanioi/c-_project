#include "Person.h"
#include "Employee.h"
#include "Manager.h"

void main()
{
	Manager manager("손동복", 30, true, "101", 5000, "인사과", 2000);
	manager.print();
}