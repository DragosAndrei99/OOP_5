#pragma once
#include "ComputerParts.h"
#include "HasButtons.h"
class Display : public ComputerParts, public HasButtons
{
private:
	int noOfButtons;
	std::string type;
public:
	Display(int price, std::string nume, int noOfButtons, std::string type);
	int getNoOfButtons();
	void afisare();
	~Display();
};

