#include <iostream>
#include <vector>
#include "bird.h"
#include "mouse.h"
#include "cat.h"

using namespace std;

int main(){
  vector <Prey*> p;
  Cat *c = new Cat("Fifi", 628.5);
  
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
  //  f = (double)rand() / RAND_MAX;//rand() generates an int 
  
 
  
  

  //  creates a Cat on the heap and calls its overloaded << operator and its call function
  //    iterates through the vector. For each Prey animal, calls the Prey's call() function, generates a random number between 0 and 1, and, if the number is less than .5, calls the Cat's predate() method with the prey as parameter, otherwise calls the Prey's flee() method.
  return 0;
}



