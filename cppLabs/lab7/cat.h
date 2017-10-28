#ifndef CAT
#define CAT

#include <iostream>
#include "predator.h"

using namespace std;

class Cat : public Predator{
 public:
  Cat(string nameIn, double weighIn);
  void call();
  
};

#endif
