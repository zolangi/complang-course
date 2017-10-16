#include "course.h"

using namespace std;

Course::Course(int courseNumIn, string courseNameIn):courseNum(courseNumIn), courseName(courseNameIn)  {} ;

string Course::getCourseInfo() const {
	return to_string(courseNum) + " " + courseName;			//have to convert int to string
}		
