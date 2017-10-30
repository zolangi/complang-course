//Animal .cpp file

#include "animal.h"

using namespace std;

Animal::Animal(string nameIn, double weighIn): name(nameIn), weigh(weighIn) {};
Animal::Animal(string nameIn): name(nameIn) {};

string Animal::getName() const{return name;};
double Animal::getWeigh() const{return weigh;};

void Animal::call(){};


ostream &operator<<(ostream& output, const Animal &ani) {
  output << "Animal Name: "<<ani.getName() << "\t Animal Weight: " << ani.getWeigh() << endl;
  return output;
};


void Animal::setName(string nameIn){name = nameIn;};
void Animal::setWeigh(double weighIn){weigh = weighIn;};

void Animal::eat(double foodWeigh){ weigh = weigh + foodWeigh;};
