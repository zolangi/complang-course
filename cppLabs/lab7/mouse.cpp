
#include "mouse.h"
using namespace std;

Mouse::Mouse(string nameIn, double weighIn):Prey(nameIn, weighIn) {};

void Mouse::flee(){cout << getName() << " scurries off!" << endl;};
void Mouse::call(){cout << getName() << ", says \'Squeak\'" << endl;};

