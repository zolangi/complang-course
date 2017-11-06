#include "person.h"
using namespace std;

Person::Person(string firstNameIn, string lastNameIn, int yearIn, int monthIn, int dayIn, char genderIn): firstName(firstNameIn), lastName(lastNameIn), year(yearIn), month(monthIn), day(dayIn), gender(genderIn){};

int Person::getMonth() const {return month;};
int Person::getDay() const{return day;};
int Person::getYear() const{return year;};
string Person::getFirstName() const{return firstName;};
string Person::getLastName() const{return lastName;};
char Person::getGender() const{return gender;};

void Person::setMonth(int monthIn){month = monthIn;};
void Person::setDay(int dayIn) {day = dayIn;};
void Person::setYear(int yearIn) {year = yearIn;};
void Person::setFirstName(string firstNameIn){firstName = firstNameIn;};
void Person::setLastName(string lastNameIn){lastName = lastNameIn;};
void Person::setGender(string genderIn){gender = genderIn;};
