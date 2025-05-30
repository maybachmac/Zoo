#pragma once
#include "Animal.h"

class Penguin : public Animal {
public:
    Penguin(const std::string& kind, const std::string& name);
    void displayInfo() const override;
};
