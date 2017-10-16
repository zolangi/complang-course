#include <iostream>
#include <math.h>
#include "circle.h"

using namespace std;

Circle::Circle(double radiusIn) :radius(radiusIn) {}
double Circle::getArea() const{return M_PI *          pow(radius,2);}
bool Circle::operator== (const Circle &other) {
  cout << "called " << endl;
  if(abs(other.radius - radius) < 0.0001)return   true; 
  else return false;
}

Circle Circle::operator+(const Circle &other){
  double combinedArea = M_PI * pow(radius, 2) +   other.getArea();
  double newRadius = sqrt(combinedArea/M_PI); 
  return Circle(newRadius);
}
