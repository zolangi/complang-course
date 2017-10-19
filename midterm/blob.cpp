//blog.cpp

#include <iostream>
#include <math.h>
#include "blob.h"

using namespace std;

Blob::Blob(double areaIn): area(areaIn){};
double Blob::getArea() const(return area);
void Blob::setArea(double areaIn) {area = areaIn;};

//check if same area
bool Blob::operator==(const Blob &other){
  cout << "called (==)" << endl;
  if(other.area == area)
    return true;
  else return false;
}

//adds other area to curr area, sets other area to 0
Blob Blob::operator+=(const Blob &other){
  double addAreas = other.getArea() + area;
  other.setArea(0);
  return Blob(addAreas);
}
