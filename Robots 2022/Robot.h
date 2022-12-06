#pragma once

#include <string>
#include <map>
#include "Machine.h"

// Forward declaration is used instead of a #include
// To use it:
// - The class you are using must only exist as a pointer in this file
// - You must not dereference the class you're trying to use in this file

class Dog;


class Robot : public Machine
{
public:

	Robot();
	Robot(std::string newName, std::string newEyeColour, float newWeight, float newPrice, Dog* newRoboDog);

	~Robot();

	void IntroduceSelf();
	void AddColourResponse(std::string colour, std::string response);
	std::string GetColourResponseFor(std::string colour);

	void SetPet(Dog* newPet);

	void RespondToName(std::string& playerName);

	void CreateDog(std::string dogName);

private:

	std::string name;
	std::string eyeColour;
	float weight;
	float price;
	std::map<std::string, std::string> colourResponse;
	Dog* pet;

	//Robot* this; // Automatically equal to the address of THIS instance
};

