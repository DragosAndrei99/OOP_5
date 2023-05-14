#pragma once
#include "ComputerParts.h"
#include "HasMemory.h"
class HDD: public ComputerParts, public HasMemory
{
private:
	int memorySize;
public:
	HDD(int price, std::string nume, int memorySize);
	int getCapacity();
	void afisare();
	~HDD();
};

