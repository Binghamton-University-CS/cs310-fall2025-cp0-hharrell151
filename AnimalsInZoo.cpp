//
// Created by chase on 8/26/2025.
//

#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(Animal animal)
{
    this->animal = animal;
    numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo()
{
    numAnimals = 0;
}

void AnimalsInZoo::display()
{
    cout << numAnimals << " ";
    animal.display();
}


