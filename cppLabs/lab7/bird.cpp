#include "bird.h"
using namespace std;

Bird::Bird(string nameIn, double weighIn):Prey(nameIn, weighIn) {};

void Bird::flee(){cout << getName() << " flies away!" << endl;};
void Bird::call(){cout << getName() << ", says \'Tweet\'" << endl;};

