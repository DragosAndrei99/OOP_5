#include "Display.h"
#include <iostream>
Display::Display(int price, std::string nume,int noOfButtons,std::string type): ComputerParts( price, nume)
{
	this->noOfButtons = noOfButtons;
	this->type = type;
}

int Display::getNoOfButtons()
{
	return noOfButtons;
}

void Display::afisare()
{
	ComputerParts::afisare();
	std::cout << noOfButtons << " " << type << std::endl;
}

Display::~Display()
{
}
