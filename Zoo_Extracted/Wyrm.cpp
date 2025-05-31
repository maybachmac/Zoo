#include "Wyrm.h"
#include <string>
#include <iostream>
using namespace std;

Wyrm::Wyrm(string nameOfAnimal, string name) 
	: Animal(nameOfAnimal, name) 
{
	habitatType = "Cave";
}

void Wyrm::displayInfo() const {
	cout << "This animal is a " << nameOfAnimal << endl << "Name: " << name << endl;
}