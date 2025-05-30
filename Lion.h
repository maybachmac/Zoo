#pragma once
#include "Animal.h"

class Lion : public Animal {
public:
    Lion(string nameOfAnimal, string name);
    void displayInfo() const override;
};
