
#include <string>
using namespace std;

class Employee{
 public:
  Employee();
  Employee(string employeeIDIn);

  string getEmployeeID() const;
  string getFirstName() const;
  string getLastName() const;
  double getHourlyWage() const;
  int getHoursWorked() const;

  void setEmployeeId(string employeeIDIn);
  void setFirstName(string firstNameIn);
  void setLastName(string lastNameIn);
  void setHourlyWage(double hourlyWageIn);
  void setHoursWorked(int hoursWorkedIn);

  double calcPay(double hourlyWage, int hoursWorked);

 private:
  string employeeID;
  string firstName;
  string lastName;
  double hourlyWage;
  int hoursWorked;
}
