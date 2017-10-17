//Paycheck.cpp

#include "paycheck.h"

using namespace std;

Paycheck::Paycheck(string employeeIDIn, string firstNameIn, string lastNameIn, int payAmountIn):employeeID(employeeIDIn), firstName(firstNameIn), lastName(lastNameIn), payAmount(payAmountIn) {};

string Paycheck::getEmployeeID() const {return employeeID;}
string Paycheck::getFirstName() const {return firstName;}
string Paycheck::getLastName() const {return lastName;}

void Paycheck::setEmployeeId(string employeeID) {employeeID = employeeIDIn;}
void Paycheck::setPayAmount(double payAmountIn) {payAmount = payAmountIn;}

void Paycheck::toString(){
  cout << "Paycheck for $" << payAmount<< " issued to " << firstName<< " " << lastName << ", Employee #" << employeeID << endl;
}
