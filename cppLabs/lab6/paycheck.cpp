//Paycheck.cpp

#include "paycheck.h"
#include <string>
using namespace std;

Paycheck::Paycheck(string employeeIDIn, string firstNameIn, string lastNameIn, int payAmountIn){
  employeeID = employeeIDIn;
  firstName = firstNameIn;
  lastName = lastNameIn;
  payAmount = payAmountIn;
}

string Paycheck::getEmployeeID() {return employeeID;}
string Paycheck::getFirstName() {return firstName;}
string Paycheck::getLastName() {return lastName;}

void Paycheck::setEmployeeId(string employeeID) {employeeID = employeeIDIn;}
void Paycheck::setPayAmount(double payAmountIn) {payAmount = payAmountIn;}

void Paycheck::toString(){
  cout << "Paycheck for $" << payAmount<< " issued to " << firstName<< " " << lastName << ", Employee #" << employeeID << endl;
}
