#include "Bird.h"



Bird::Bird()
{
}

Bird::Bird(int age, int weight)
{
	cout << " ³ªÀÌ" << "\t" << age << endl;
	cout << " ¸ö¹«°Ô" << "\t" << weight << endl;
}


Bird::~Bird()
{
}

void Bird::speak() const
{
	cout << "Â±Â±" << endl;
}
