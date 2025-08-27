//
// Created by chase on 8/26/2025.
//

#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include "Animal.h"


class AnimalsInZoo
{
public:
    AnimalsInZoo(Animal animal);

    AnimalsInZoo();

    void display();
private:
    int numAnimals;
    Animal animal;
};



#endif //ANIMALSINZOO_H
