from course import Course

class Student:
    def __init__(self,idNum,studentname):
        self._idNum = idNum
        self._studentname = studentname
        self._schedule = []
        
    def get_studentname(self):
        return self._studentname

    def get_idNum(self):
        return self._idNum

    def add_course(self, courseId, courseName):
        self._schedule.append(Course(courseId, courseName))
        
    
    def get_schedule(self):
        print('Course Schedule:')
        for c in self._schedule:
            print(c)
            
    def __str__(self):
        return 'Id #'+ str(self._idNum) + '\tStudent: ' + str(self._studentname)
