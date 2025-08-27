//
// Created by chase on 8/26/2025.
//

#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal {
public:
    Animal(string speciesName, unsigned int discoveryYear);

    Animal();

    void display();

private:
    string species = "";
    unsigned int year_discovered = 0;
};

#endif //ANIMAL_H
