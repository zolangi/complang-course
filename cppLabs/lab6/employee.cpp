//Employee.cpp

#include "employee.h"

using namespace std;

Employee::Employee(string employeeIDIn):employeeID(employeeIDIn) {};
Employee::Employee(string employeeIDIn, string firstNameIn, string lastNameIn, double hourlyWageIn, int hoursWorkedIn):employeeID(employeeIDIn), firstName(firstNameIn), lastName(lastNameIn), hourlyWage(hourlyWageIn), hoursWorked(hoursWorkedIn) {};
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
      cout << "The number of Digits entered for EmployeeID is not valid" << endl;
    }
  }

void Employee::setFirstName(string firstNameIn){firstName = firstNameIn;}
void Employee::setLastName(string lastNameIn){lastName = lastNameIn;}
void Employee::setHourlyWage(double hourlyWageIn){hourlyWage = hourlyWageIn;}
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
