// Predator .h file

#ifndef PREDATOR
#define PREDATOR

#include <iostream>
#include "animal.h"
#include "prey.h"

using namespace std;

class Prey;
class Predator : public Animal {
 public:
  Predator(string nameIn, double weighIn);
  virtual void predate(Prey *prey);
};

#endif
