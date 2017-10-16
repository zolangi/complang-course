//Paycheck.h

#include <string>
using namespace std;

class Paycheck{

  public:
    Paycheck();
    Paycheck(string employeeIDIn, string firstNameIn, string lastNameIn, int payAmountIn);

    int getPayAmount() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmployeeID() const;

    void setPayAmount(double payAmountIn);
    void setEmployeeId(string employeeIDIn);

    void toString();
  private:
    double payAmount;
    string firstName;
    string lastName;
    string employeeID;
}
