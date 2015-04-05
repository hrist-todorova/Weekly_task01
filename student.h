#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

class Student
{
 public:
    Student();
    Student(Student const&);
    ~Student();
    Student& operator=(Student const&);


private:
    char* name;
    int number;
    char* fav_subject;
};

#endif // STUDENT_H_INCLUDED
