#include "Robot.h"
#include <iostream>
#include "Dog.h"

Robot::Robot()
    : Machine()
    , name("")
    , eyeColour("")
    , weight(0)
    , price(0)
    , colourResponse()
    , pet(nullptr)
{
    std::cout << "Robot " << serialNumber << " constructed!" << std::endl;
}

Robot::Robot(std::string newName, std::string newEyeColour, float newWeight, float newPrice, Dog* newRoboDog)
    : Machine()
    , name(newName)
    , eyeColour(newEyeColour)
    , weight(newWeight)
    , price(newPrice)
    , colourResponse()
    , pet(newRoboDog)
{
    std::cout << "Robot " << name << "-" << serialNumber << " constructed using parameters!" << std::endl;
}

Robot::~Robot()
{
    if (pet != nullptr)
    {
        //delete pet;
        pet = nullptr;
    }

    std::cout << "Robot " << name << "-" << serialNumber << " destroyed." << std::endl;
}

void Robot::IntroduceSelf()
{
    std::cout << "HELLO MY NAME IS " << name
        << ". I HAVE " << eyeColour << " EYES AND WEIGH "
        << weight << " WEIGHT UNITS." << std::endl
        << "I COST " << price << " POUNDS." << std::endl
        << "NICE TO MEET YOU." << std::endl;

    std::cout << "MY MEMORY ADDRESS IS " << this << std::endl;

    // If the pet exists
    if (pet != nullptr)
    {
        std::cout << "OH, I ALSO HAVE A DOG NAMED " << pet->GetName() << std::endl;
    }
}

void Robot::AddColourResponse(std::string colour, std::string response)
{
    colourResponse[colour] = response;
}

std::string Robot::GetColourResponseFor(std::string colour)
{
    return colourResponse[colour];
}

void Robot::SetPet(Dog* newPet)
{
    pet = newPet;

    pet->SetMaster(this);
}

void Robot::RespondToName(std::string& playerName)
{
    std::cout << "HELLO " + playerName + "!" << std::endl;
    std::string shortName = playerName.substr(0, 3);
    std::cout << "CAN I CALL YOU " + shortName + "? (Y/N)" << std::endl;
    std::string response;
    std::cin >> response;

    if (response == "Y")
    {
        playerName = shortName;
        std::cout << "OKAY NICE TO MEET YOU " + playerName << std::endl;
    }
    else
    {
        std::cout << "OKAY I WILL CALL YOU " + playerName << std::endl;
    }
}

void Robot::CreateDog(std::string dogName)
{
    // If there is already a pet
    if (pet != nullptr)
    {
        // do nothing, pet already exists
        return;
    }

    // We know there is no pet
    // Create one!
    pet = new Dog(); // TODO: Name!
}
