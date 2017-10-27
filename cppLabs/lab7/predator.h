// Predator .h file

#ifndef PREDATOR
#define PREDATOR

#include <iostream>
#inlcude "animal.h"

using namespace std;

class Predator : public Animal {
 public:
  Predator(string nameIn, double weighIn);
  
};

#endif
