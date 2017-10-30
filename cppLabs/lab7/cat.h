#ifndef CAT
#define CAT

#include <iostream>
#include "predator.h"
#include "prey.h"
using namespace std;

class Cat : public Predator{
 public:
  Cat(string nameIn, double weighIn);
  void call();
  friend ostream &operator<<(ostream &output, const Cat &cat);
  void predate(Prey *prey);
};

#endif
