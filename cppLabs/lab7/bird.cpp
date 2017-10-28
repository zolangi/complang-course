#include "bird.h"
using namespace std;

Bird::Bird(string nameIn):Prey(nameIn) {};

Bird::flee(){cout << Prey::getName() << " flies away!" << endl;};
Bird::call(){cout << Prey::getName() << ", says \'Tweet\'" << endl;};
