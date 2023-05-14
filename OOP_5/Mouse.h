#pragma once
#include <string>
#include "ComputerParts.h"
#include "HasButtons.h"
class Mouse : public ComputerParts, public HasButtons
{
private:
	int noOfButtons;
	std::string type;
public:
	Mouse(int price, std::string nume, int noOfButtons, std::string type);
	int getNoOfButtons();
	void afisare();
	~Mouse();
};

