#pragma once
#include "Animal.h"

class Penguin : public Animal {
public:
    Penguin(string nameOfAnimal, string name);
 
    void displayInfo() const override;
    void makeSound() const override;
    void slideAway() const;
};
