#include "Pet.h"
#include <iostream>

Pet::Pet()
	: Machine()
	, name("")
	, master(nullptr)
{
	std::cout << "Pet "<< serialNumber << " was created using a default constructor" << std::endl;
}

Pet::Pet(std::string newName)
	: Machine()
	, name(newName)
	, master(nullptr)
{
	std::cout << "Pet " << name << "-" << serialNumber << " was created using parameters." << std::endl;
}

Pet::~Pet()
{
	std::cout << "Pet " << name << "-" << serialNumber << " was destroyed!" << std::endl;
}

void Pet::Speak()
{
	std::cout << name << " stares at you silently." << std::endl;
}

std::string Pet::GetName()
{
	return name;
}

void Pet::SetMaster(Robot* newMaster)
{
	master = newMaster;
}
