#from student import Student

class Course:
    def __init__(self, courseNum, name):
        self._courseNum = courseNum
        self._name = name
#        self._students = []
        
    def get_courseNum(self):
        return self._courseNum

    def get_name(self):
        return self._name

#    def add_student(self, studentid, name):
#        self._students.append(Student(studentid, name))

#    def get_students(self):
#        curr = None
#        print('Students Enrolled in %s:\n', self.get_name())
        # for index in range(len(self._students)):
        #     curr = self._students[index]
        # return curr + '\n'

    def __str__(self):
        return 'Course #' + str(self._courseNum) + ': ' + str(self._name)

    
