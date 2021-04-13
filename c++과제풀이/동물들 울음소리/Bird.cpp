#include "Bird.h"



Bird::Bird()
{
}

Bird::Bird(int age, int weight):Animal( age,  weight)
{
}


Bird::~Bird()
{
}

void Bird::speak() const
{
	cout << "±±" << endl;
}
