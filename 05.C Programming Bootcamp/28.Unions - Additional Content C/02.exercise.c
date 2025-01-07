#include <stdio.h>
#include <stdlib.h>

struct point_union
{
    int x;
    int y;
};

union info
{
    char firstName[20];
    int age;

};

int main()
{
    union info myVariable1;
    myVariable.age = 30;
    printf("myVariable1.age = %d")
    
    return 0;
}