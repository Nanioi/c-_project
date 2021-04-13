#pragma once
#include "Animal.h"
#include <string>

class Bird : public Animal
{
public:
	Bird();
	Bird(int age, int weight);
	~Bird();


	void speak()const;
};

