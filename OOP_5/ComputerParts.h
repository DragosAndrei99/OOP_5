#pragma once
#include <string>
class ComputerParts
{
protected:
	int price;
	std::string nume;
public:
	ComputerParts(int price, std::string nume);
	int getPrice();
	std::string getNume();
	virtual void afisare();
	virtual ~ComputerParts();
};

