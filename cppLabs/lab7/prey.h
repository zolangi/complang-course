//prey .h file

#ifndef PREY
#define PREY

#include "animal.h"
#include <iostream>

using namespace std;

class Prey : public Animal{
 public: 
  Prey(string nameIn, double weighIn);
  Prey(string name);
  virtual void flee() = 0;
};

#endif
