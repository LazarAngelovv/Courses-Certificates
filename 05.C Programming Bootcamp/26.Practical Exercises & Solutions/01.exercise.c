#include <stdio.h>
#include <stdlib.h>

//Recursive function that recives numbers from user until '-1'
// num = 4
// 2,3,3,3,4
int totalSmaller(int num)
{
    int inputUser;
    
    printf("Please enter a number: ");
    scanf("%d", &inputUser);
    
    if(inputUser == -1)
        return 0;
    if(inputUser < num)
        return totalSmaller(num);
}

int main()
{
    long long int num = 200;
    int totalSmallerNumbers = totalSmaller(num);

    return 0;
}