// Bank Accountants .h
// examine accounts in ascending order of account number

#include "savings.h"

class Bank{
  public:
    bool operator() (Savings &low, Savings &hi);
};
