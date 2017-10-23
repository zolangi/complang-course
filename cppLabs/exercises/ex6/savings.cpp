// Savings Account .cpp File

#include "savings.h"

using namespace std;

ostream &operator<<(ostream &output, const Savings &sav){
  output << sav.getOwnerName() << endl
	 << "\t Account Num.: #" << sav.getAccountNum() << " , "
	 << "\t Balance: $" << sav.getBalance() << endl;
  return output;
};


Savings::Savings(string ownerNameIn, int accountNumIn, double balanceIn): ownerName(ownerNameIn), accountNum(accountNumIn), balance(balanceIn) {};

string Savings::getOwnerName() const {return ownerName;};
int Savings::getAccountNum() const {return accountNum;};
double Savings::getBalance() const {return balance;};
