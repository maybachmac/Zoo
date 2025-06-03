#pragma once
#include "Animal.h"

class Lion : public Animal {
public:
    Lion(string nameOfAnimal, string name);
    void displayInfo() const override;
    void makeSound() const override;
    //adding a function to demonstrate dynamic casting of it; Uniqeq to lion
    void countPennies() const;
};
