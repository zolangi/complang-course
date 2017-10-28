#ifndef BIRD
#define BIRD

#include <iostream>
#include "prey.h"

using namespace std;

class Bird : public Prey {
 public:
  Bird(string nameIn);
  void flee();
  void call();
};

#endif


 
