import sys
from university import University

def main():
    uni = University()

    print(uni, '\n')

    #Add a few courses
    uni.add_course(1234, 'English 101')
    uni.add_course(2314, 'Sociology 101')
    uni.add_course(3142, 'French 101')
    uni.add_course(3467, 'Math 101')

    #Show all courses
    uni.get_courses()

    #Enroll a student
    uni.add_student(4576, 'James Dean')
    uni.add_student(7783, 'Johnny Depp')
    uni.add_student(9042, 'James Franco')
    uni.add_student(3245, 'Dave Franco')

    #Find a student by student_id, find a course by course_id, and enroll in the course
    uni.enroll_student(3142, 4576) #French 101 - James Dean
    uni.enroll_student(2314, 4576) #Sociology 101 - James Dean
    
    uni.enroll_student(1234, 9042) #English 101 - James Franco
    uni.enroll_student(3467, 9042) #Math 101 - James Franco
    
    uni.enroll_student(1234, 3245) #English 101 - Dave Franco
    uni.enroll_student(3142, 3245) #French 101 - Dave Franco
    
    uni.enroll_student(2314, 7783) #Sociology 101 - Johnny Depp
    uni.enroll_student(3467, 7783) #Math 101 - Johnny Depp
    
    #Show students and each of their course schedule's
    uni.get_students()
    
if __name__ == "__main__":
    sys.exit(main())
