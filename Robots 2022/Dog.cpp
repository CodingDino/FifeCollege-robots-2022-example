#include "Dog.h"
#include <iostream>

Dog::Dog()
	: Pet("Dog")
{
	std::cout << "Dog " << name << "-" << serialNumber << " was created using a default constructor" << std::endl;
}

Dog::Dog(std::string newName, Robot* newMaster)
	: Pet(newName)
{
	SetMaster(newMaster);
	std::cout << "Dog " << name << "-" << serialNumber << " was created using parameters" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog " << name << "-" << serialNumber << " was destroyed!" << std::endl;
}

void Dog::Speak()
{
	std::cout << "Borf borf" << std::endl;
}
