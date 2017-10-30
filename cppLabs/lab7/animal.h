//Animal .h file

#ifndef ANIMAL
#define ANIMAL

#include <iostream>

using namespace std;
class Animal{
  friend ostream &operator<<(ostream &output, const Animal &ani);
 public:
  Animal(string nameIn, double weighIn);
  Animal(string nameIn);

  string getName() const;
  double getWeigh() const;

  virtual void call();
  //  virtual ostream &operator<<(ostream &output) const;
  
  void setName(string nameIn);
  void setWeigh(double doubleIn);

  void eat(double foodweigh);
 
private:
  string name;
  double weigh;
};
#endif
