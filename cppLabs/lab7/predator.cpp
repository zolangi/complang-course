#include "predator.h"
using namespace std;

Predator::Predator(string nameIn, double weighIn): Animal(nameIn, weighIn) {};

string Predator::getName() {
  return Animal.getName();
};
