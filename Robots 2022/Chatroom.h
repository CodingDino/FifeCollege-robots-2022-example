#pragma once
#include <map>
#include <string>
#include "Robot.h"

class Chatroom
{
public:

	// Constructors/Destructors
	Chatroom();
	~Chatroom();

	// Public functions
	void StartChat();

	// Data members
	std::map<std::string, Robot> roster;

};

