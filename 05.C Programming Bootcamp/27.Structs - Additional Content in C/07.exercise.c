#include <stdio.h>
#include <stdlib.h>

typedef struct emplyee
{
    char name[10];
    float age;
    int id;
}Employee;

int main()
{

    Employee emp1;
    Employee emp2 = {"Jake", 24.5, 123};

    emp1 = emp2;

    printf("Emplyee 1 name is %s\n", emp1.name);
    printf("Emplyee 2 name is %s\n ",emp2.name);
      
    return 0;
}