#include <stdio.h>
#include <stdlib.h>

void ageFunc(int age)
{
    printf("Your age is %d\n", age);
}
int main()
{
    int age;
    void(*pf)(int);
    printf("Enter your age: ");
    scanf("%d", &age);

    pf = &ageFunc;
    (pf)(age);

    return 0;
}