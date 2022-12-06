// Robots 2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Robot.h"
#include "Dog.h"
#include "Fish.h"
#include "Bird.h"
#include "Chatroom.h"




int main()
{
    Dog myDog("Fido", nullptr);
    std::cout << std::endl;
    Fish myFish;
    std::cout << std::endl;
    Bird myBird;
    std::cout << std::endl;
    Robot myRobot("Bob", "Blue", 100, 100, &myDog);

    std::cout << std::endl;
    std::cout << std::endl;

    myDog.Speak();
    myFish.Speak();
    myBird.Speak();

    std::cout << std::endl;
    std::cout << std::endl;
}
