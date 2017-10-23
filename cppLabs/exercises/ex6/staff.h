// Sales Staff .h file
// examine the accounts by descending order of balance

#include "savings.h"

class Staff{
 public:
  bool operator() (Savings &low, Savings &hi);
};
