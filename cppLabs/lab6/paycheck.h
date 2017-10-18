//Paycheck.h
#ifndef PAYCHECK
#define  PAYCHECK

#include <iostream>
using namespace std;

class Paycheck{

  public:
    Paycheck()= default;
    Paycheck(string employeeIDIn, string firstNameIn, string lastNameIn, double payAmountIn);

    string getEmployeeID() const;
    string getFirstName() const;
    string getLastName() const;
    double getPayAmount() const;

    void setPayAmount(double payAmountIn);
    void setEmployeeId(string employeeIDIn);

    void toString();
  private:
    string employeeID;
    string firstName;
    string lastName;
    double payAmount;
};
#endif
