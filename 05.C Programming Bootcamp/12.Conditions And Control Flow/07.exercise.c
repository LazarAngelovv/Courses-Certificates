#include <stdio.h>
#include <stdlib.h>
//Logical Operators
int main()
{
    int money;
    int grade;
    printf("Enter money and grade: \n");
    scanf("%d%d", &money,&grade);

    if(money < 50 && grade > 90)
        //Do something
    if(money < 50 || grade > 90)
        // Do something
        //NOT <-> "!"
    if(!(grade > 80))
        printf("Good Job! \n");//grade<=80

    return 0;
}