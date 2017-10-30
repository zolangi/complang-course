#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "bird.h"
#include "mouse.h"
#include "cat.h"

using namespace std;

int main(){
  vector <Prey*> p;
  Cat *c = new Cat("Fifi", 628.5);
  cout << *c;
  
  c->call();
  
  
    
  Bird *b1 = new Bird("Guido", 24.4);
  Bird *b2 = new Bird("Monty", 10.9);

  Mouse *m1 = new Mouse("Jerry", 76.3);
  Mouse *m2 = new Mouse("Terrence", 34.44);
  
  
  p.push_back(b1);
  p.push_back(b2);
  p.push_back(m1);
  p.push_back(m2);

  srand(time(NULL));// seed number from system clock
  for(Prey *prey: p){
    double f = (double)rand() / RAND_MAX;//rand() generates an int 
    cout << "Random number b/w 0-1:\t" << f << endl;
    prey->call();
    
    if(f < 0.5 )
      c->predate(prey);
    else
      prey->flee();
  }

  cout << c->getName() <<"\'s Final weight is " << c->getWeigh() << "grams" <<endl;
  return 0;
}



