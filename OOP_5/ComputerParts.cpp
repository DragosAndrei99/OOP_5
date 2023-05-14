#include "ComputerParts.h"
#include <iostream>
ComputerParts::ComputerParts(int price, std::string nume)
{
    this->price = price;
    this->nume = nume;
}

int ComputerParts::getPrice()
{
    return price;
}

std::string ComputerParts::getNume()
{
    return nume;
}

void ComputerParts::afisare()
{
    std::cout << nume << " " << price << " ";
}

ComputerParts::~ComputerParts()
{
    std::cout << "Apel al destructorului ComputerParts" << std::endl;
}
