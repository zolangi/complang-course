#include <iostream>
#include <vector>
#include "Borg.h"
 
using namespace std;

int main(){
   const int NUM_BORG = 10;
   vector<Borg> borgs;
   for(int counter = 1; counter < NUM_BORG; counter++){
      borgs.push_back(Borg(counter));
   }
   for(Borg b: borgs){				 // enhanced for loop, just like in Java!
      b.attack();
   }
}
