#include "Machine.h"
#include <iostream>
#include <stdlib.h>     /* srand, rand */

Machine::Machine()
	: serialNumber(0)
{
	serialNumber = abs(rand());

	std::cout << "Machine was created using a default constructor with serial number = " << serialNumber << std::endl;

}

Machine::~Machine()
{
	std::cout << "Machine "<< serialNumber << "was destroyed!" << std::endl;
}

int Machine::GetSerialNumber()
{
	return serialNumber;
}
