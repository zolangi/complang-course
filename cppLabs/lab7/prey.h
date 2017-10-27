//prey .h file

#ifndef PREY
#define PREY

#include "animal.h"
#include <iostream>

using namespace std;

class Prey : public Animal{
 public: 
  Prey(string nameIn);
  virtual void flee() = 0;
  
 private:
  string name;
  double weigh;
};

#endif
