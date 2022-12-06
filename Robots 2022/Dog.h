#pragma once
#include <string>
#include "Pet.h"

class Robot;

class Dog : public Pet
{
public:

	Dog();
	Dog(std::string newName, Robot* mewMaster);

	~Dog();

	// Public Functions
	void Speak();

private:


};

