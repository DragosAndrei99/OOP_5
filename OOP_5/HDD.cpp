#include "HDD.h"
#include <iostream>
HDD::HDD(int price, std::string nume, int memorySize): ComputerParts(price, nume)
{
	this->memorySize = memorySize;
}

int HDD::getCapacity()
{
	return memorySize;
}

void HDD::afisare()
{
	ComputerParts::afisare();
	std::cout << memorySize << std::endl;
}

HDD::~HDD()
{
}
