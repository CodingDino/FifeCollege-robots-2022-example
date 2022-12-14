#include "Fish.h"
#include <iostream>

Fish::Fish()
	: Pet("Fish")
{
	std::cout << "Fish was created using a default constructor" << std::endl;
}

Fish::~Fish()
{
	std::cout << "Fish " << name << " was destroyed!" << std::endl;
}

void Fish::Speak()
{
	//Pet::Speak();
	std::cout << "Blub blub" << std::endl;
}
