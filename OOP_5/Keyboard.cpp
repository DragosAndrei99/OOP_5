#include "Keyboard.h"
#include <iostream>
Keyboard::Keyboard(int price, std::string nume, int noOfButtons) : ComputerParts(price, nume)
{
	this->noOfButtons = noOfButtons;
}

int Keyboard::getNoOfButtons()
{
	return noOfButtons;
}

void Keyboard::afisare()
{
	ComputerParts::afisare();
	std::cout << noOfButtons << std::endl;
}

Keyboard::~Keyboard()
{
	std::cout << "Apel la destructorului Keyboard" << std::endl;
}
