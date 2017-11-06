#ifndef PERSON
#define PERSON

#include <iostream>
using namespace std;

class Person{
 public:
  Person(string firstNameIn, string lastNameIn, int yearIn, int monthIn, int dayIn, char genderIn);

  int getMonth() const;
  int getDay() const;
  int getYear() const;
  string getFirstName() const;
  string getLastName() const;
  char getGender() const;

  void setMonth(int monthIn);
  void setDay(int dayIn);
  void setYear(int yearIn);
  void setFirstName(string firstNameIn);
  void setLastName(string lastNameIn);
  void setGender(char genderIn);
  
 private:
  int month, day, year;
  string firstName, lastName;
  char gender;
};

#endif
