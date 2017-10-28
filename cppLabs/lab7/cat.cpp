#include "cat.h"
using namespace std;

Cat::Cat(string nameIn, double weighIn): Predator(nameIn, weighIn) {};

void Cat::call(){
  cout << Predator.getName() << " says \'Meow\'" << endl;
}


