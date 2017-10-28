#ifndef MOUSE
#define MOUSE

#include <iostream>
#include "prey.h"

using namespace std;

class Mouse : public Prey {
 public:
  Mouse(string nameIn);
  void flee();
  void call();
};

#endif

