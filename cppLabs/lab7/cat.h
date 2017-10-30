#ifndef CAT
#define CAT

#include <iostream>
#include "predator.h"
#include "prey.h"
using namespace std;

class Cat : public Predator{
  friend ostream &operator<<(ostream &output, const Cat &cat);
 public:
  Cat(string nameIn, double weighIn);
  void call();

  void predate(Prey *prey);
};

#endif
