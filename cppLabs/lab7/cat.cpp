#include "cat.h"
using namespace std;

Cat::Cat(string nameIn, double weighIn): Predator(nameIn, weighIn) {};

void Cat::call(){
  cout << getName() << " says \'Meow\'" << endl;
}

ostream &operator<<(ostream &output, const Cat &cat){
  output << cat.getName() << "\t Animal Weight: " << cat.getWeigh() << endl;
  return output;
};
//might need to change pointer to prey here to Prey &prey
void Cat::predate(Prey *prey){
  eat(prey->getWeigh());
  cout << getName() << " pounces and devours " << prey->getName() <<  " who weighs " << prey->getWeigh()<< "grams" << endl;
};
