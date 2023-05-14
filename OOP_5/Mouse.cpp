#include "Mouse.h"
#include <iostream>
Mouse::Mouse(int price, std::string nume, int noOfButtons, std::string type): ComputerParts(price, nume)
{
	this->noOfButtons = noOfButtons;
	this->type = type;
}

int Mouse::getNoOfButtons()
{
	return noOfButtons;
}

void Mouse::afisare()
{
	ComputerParts::afisare();
	std::cout << noOfButtons << " " << type << std::endl;
}

Mouse::~Mouse()
{
}
