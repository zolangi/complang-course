//Prey .cpp file

#include <iostream>
#include "prey.h"

using namespace std;

Prey::Prey(string nameIn, double weighIn): Animal(nameIn, weighIn) {};
Prey::Prey(string nameIn): Animal(nameIn) {};

void  Prey::flee(){};

