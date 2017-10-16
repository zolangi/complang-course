//Employee.cpp

#include "employee.h"
#include <string>
using namespace std;

Employee::Employee(string employeeIDIn) {employeeID = employeeIDIn};

string Employee::getEmployeeID() const {return employeeID;}
string Employee::getFirstName() const {return firstName;}
string Employee::getLastName()	const {return lastName;}
double Employee::getHourlyWage() const {return hourlyWage;}
int Employee::getHoursWorked() const {return hoursWorked;}

void Employee::setEmployeeID(string employeeIDIn){
    int idNum = stoi(employeeIDIn);
    boolean fourDigits = checkDigits(idNum);
    if(fourDigits == true){
      employee = "E" + employeeID;
    }
    else{
      cout << "The number of Digits entered for EmployeeID is not valid" << '\n';
    }
  }

void Employee::setFirstName(string firstNameIn){firstName = firstNameIn;}
void Employee::setLastName(string lastNameIn){lastName = lastNameIn;}
void Employee::setShoeSize(double hourlyWageIn){hourlyWage = hourlyWageIn;}
void Employee::setHoursWorked(int hoursWorkedIn){hoursWorked = hoursWorkedIn;}

double Employee::calcPay(double hourlyWage, int hoursWorked){
  double payTotal = hourlyWage * (double) hoursWorked;
  return payTotal;
 }

boolean checkDigits(int id){
  int digits = 0;
  do {
    id/=10;
    digits++;
  } while(id!=0);

  if(digits = 4){return true;}
  else {return false;}
}
