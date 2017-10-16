#include <iostream>
#include "Borg.h"
using namespace std;

int Borg::borgCount = 0;
Borg::Borg(int ordinalIn) : ordinal(ordinalIn){borgCount++;}

void Borg::attack(){cout << ordinal << " of " << borgCount << " attacks " << endl;}
