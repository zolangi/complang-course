#include "mouse.h"
using namespace std;

Mouse::Mouse(string nameIn):Prey(nameIn) {};

Mouse::flee(){cout << Prey::getName() << " scurries off!" << endl;};
Mouse::call(){cour << Prey::getName() << ", says \'Squeak\'" << endl;};

