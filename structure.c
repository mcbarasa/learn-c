#include <stdio.h>

struct studentData

{

char *stu_name;

int stu_id;

int stu_age;

};

int main()

{

    struct studentData student;

student.stu_name = "Justus",

student.stu_id = 5593;

student.stu_age =20;

printf("student name is:%s",student.stu_name);

printf("\nstudent id is:%d",student.stu_id);

printf("\nstudent age is:%d",student.stu_age);

return 0;

    }
    
