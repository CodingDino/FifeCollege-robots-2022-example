#include "Bird.h"
#include <iostream>

Bird::Bird()
	: Pet("Bird")
{
	std::cout << "Bird was created using a default constructor" << std::endl;
}

Bird::~Bird()
{
	std::cout << "Bird " << name << " was destroyed!" << std::endl;
}

void Bird::Speak()
{ 
	std::cout << "Tweet tweet!" << std::endl;
}
