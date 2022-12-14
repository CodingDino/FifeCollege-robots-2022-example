#pragma once
#include <string>
#include "Machine.h"

class Robot;

class Pet : public Machine
{

public:

	// Constructors/Destructors
	Pet();
	Pet(std::string newName);
	virtual ~Pet();

	// Public Functions
	virtual void Speak() = 0; // Pure virtual function, this makes Pet an abstract class

	// Getters
	std::string GetName();

	// Setters
	void SetMaster(Robot* newMaster);

protected:

	std::string name;
	Robot* master;

};

