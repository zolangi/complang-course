//Savings Account .h file

/*
Each savings account has an owner name (can be one string), a balance (double), and an account number (int).
Write whatever constructors, getters, and setters you need and provide an overloaded << operator.
*/

#ifndef SAVINGS
#define SAVINGS

#include <iostream>
#include <string>
using namespace std;

class Savings{
 friend ostream &operator<<(ostream &output, const Savings &sav);
 public:
  Savings() = default;
  Savings(string ownerNameIn, int accountNumIn, double balanceIn);

  string getOwnerName() const;
  int getAccountNum() const;
  double getBalance() const;

 private:
  string ownerName;
  int accountNum;
  double balance;
};

#endif
