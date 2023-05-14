
#include <vector>
#include "Display.h"
#include "Mouse.h"
#include "Keyboard.h"
#include "HDD.h"
#include <iostream>
int main()
{
	std::vector<ComputerParts*> components;
	Display d1(20, "ASUS", 4, "LED");
	Keyboard k1(10, "Logitech", 40);
	Mouse m1(5, "Logitech", 2, "mecanic");
	HDD h1(300, "Hdd", 2000);
	Keyboard* k2 = new Keyboard(10, "Logitech", 40);
	ComputerParts* cp2 = k2;
	components.push_back(&d1);
	components.push_back(&k1);
	components.push_back(&m1);
	components.push_back(&h1);

	for (int i = 0; i < components.size(); i++)
	{
		components[i]->afisare();
	}

	delete cp2;
	std::cin.get();
}