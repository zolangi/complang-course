//Prey .cpp file

#include <iostream>
#include "prey.h"

using namespace std;

Prey::Prey(string nameIn, double weighIn): Animal(nameIn, weighIn) {};
Prey::Prey(string nameIn): Animal(nameIn) {};

string Prey::getName() const{
  return Animal::getName();
};
