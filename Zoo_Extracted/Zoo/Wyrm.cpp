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

void Wyrm::makeSound() const {
	cout << "The " << nameOfAnimal << "'s" << " hiss with Malice" << endl;
}

void Wyrm::breatheFire() const {
	cout << "The Wyrm breathes fire into the sky!" << endl << endl;
}
