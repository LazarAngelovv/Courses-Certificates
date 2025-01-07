#include <stdio.h>
#include <stdlib.h>

union Student
{
    int ID;
    double average;
};

int main()
{
    union Student  student1;
    union Student *ptrStudent2;
    
    student1.ID = 5;
    printf("student1.ID = %d\n",student1.ID);
    ptrStudent2 = &student1;//ptrStudents2 point to student 1 variable

    ptrStudent2 = &student1;
    ptrStudent2->ID = 10;
    printf("student1.ID = %d\n",student1.ID);

    printf("Size of student1 union = %d\n",sizeof(student1));
    printf("Size of student2  = %d\n",sizeof(ptrStudent2));
    
    return 0;
}