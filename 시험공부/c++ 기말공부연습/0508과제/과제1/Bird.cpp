#include "Bird.h"



Bird::Bird()
{
}

Bird::Bird(int age, int weight)
{
	cout << " ����" << "\t" << age << endl;
	cout << " ������" << "\t" << weight << endl;
}


Bird::~Bird()
{
}

void Bird::speak() const
{
	cout << "±±" << endl;
}
