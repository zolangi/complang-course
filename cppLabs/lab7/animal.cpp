//Animal .cpp file

#include "animals.h"

using namespace std;



Animal::Animal(string nameIn, double weighIn): name(nameIn), weigh(weighIn) {};

string Animal::getName() const{return name;};
double Animal::getWeigh() const{return weigh;};

void Animal::setName(string nameIn){name = nameIn;};
void Animal::setWeigh(double weighIn){weigh = weighIn;};

void Animal::eat(double foodWeigh){ weigh = weigh + foodWeigh;};
