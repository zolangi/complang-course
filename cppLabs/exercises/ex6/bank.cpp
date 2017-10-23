// Bank Accountants .cpp
// examine accounts in ascending order of account number

#include "bank.h"

bool Bank::operator() (Savings &low, Savings &hi){
    if(low.getAccountNum() > hi.getAccountNum()) {return true;};
    return false;
  }
