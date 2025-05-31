#pragma once
#include <iostream>
#include <vector>
#include "Habitat.h"
using namespace std;
class Zoo {
private:
    vector<Habitat> habitats;

public:
    void addHabitat(const Habitat& habitat);
    void displayZoo() const;
};


