// Sales Staff .cpp file
// examine the accounts by descending order of balance

#include "staff.h"
  bool Staff::operator() (Savings &low, Savings &hi){
    if(low.getBalance() < hi.getBalance()) {return true;};
    return false;
  }
