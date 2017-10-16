#ifndef COURSE
#define COURSE

#include <string>
using namespace std;

class Course{
	public:
		Course(int courseNumIn, string courseNameIn);
		string getCourseInfo() const;			
		
	private:
		int courseNum;
		string courseName;
};
#endif
