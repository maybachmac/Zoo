#pragma once
#include "Animal.h"

class Elephant : public Animal {
public:
    Elephant(string nameOfAnimal, string name);
    void displayInfo() const override;
};
