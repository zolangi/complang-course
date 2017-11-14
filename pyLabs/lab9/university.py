from course import Course
from student import Student

class University:
    def __init__(self):
        self._courses =[]
        self._enrolled = []

        
    def add_course(self, courseNum, name): #Adds a course
        self._courses.append(Course(courseNum, name))

    def find_course(self, courseNum): #finds a course by course id
        curr = None
        for index in self._courses:
            if(self._courses[index].get_courseNum() == courseNum):
                curr = index
        return curr

    def get_courses(self): #Print all the courses
        print('Course List:')
        for index in self._courses:
            print(index)

    def find_student(self, studentid): #Find a student by their student id                                                                           
        curr = None
        for index in self._enrolled:
            if(self._enrolled[index].get_idNum() == studentid):
                curr = index
        return curr
    
    def enroll_student(self, courseNum, studentid): #Enroll a student, using their id, to a course by course id
        index = find_student(studentid)
        cindex = find_course(courseNum)
        self._enrolled[index].add_course(self._courses[cindex].get_courseNum(),self._courses[cindex].get_name())
        
    def add_student(self, studentid, name):
        self._enrolled.append(Student(studentid, name)) #Enroll a student to the University

    def get_students(self): #Prints the list of students Enrolled and their schedule
        print('\nEnrolled Students:')
        for index in self._enrolled:
            print(index)
            print(index.get_schedule(), '\n')

    def __str__(self):
        return 'Welcome to the University Enrollement!'
