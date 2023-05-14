#pragma once
#include "ComputerParts.h"
#include "HasButtons.h"
class Keyboard : public ComputerParts, public HasButtons
{
private: 
	int noOfButtons;
public:
	Keyboard(int price, std::string nume, int noOfButtons);
	int getNoOfButtons();
	void afisare();
	~Keyboard();
};

