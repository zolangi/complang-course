//Animal .h file

#ifndef ANIMAL
#define ANIMAL

#include <iostream>

using namespace std;
class Animal{
 public:
  Animal(string nameIn, double weighIn);
  
  string getName() const;
  double getWeigh() const;

  virtual void call() = 0;
  virtual ostream& operator<<(ostream& output) const;
  
  friend ostream &operator<<(ostream &output, const Animal &ani);

  void setName(string nameIn);
  void setWeigh(double doubleIn);

  void eat(double foodweigh);
 
private:
  string name;
  double weigh;
};
#endif
