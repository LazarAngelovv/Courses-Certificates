#include <stdio.h>
#include <stdlib.h>

//Find max number in a sequence
int findMax(int num)
{
    int maxSoFar; 
    int userInput; 

    printf("Enter number: ");
    scanf("%d", &userInput);
  
    if(num > 1)
    {
        maxSoFar = findMax(num -1);

        if(userInput > maxSoFar)
            return  userInput;
        else
            return maxSoFar;
    }
    return userInput;
}

int main()
{
    int num;
    int result;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    result = findMax(num);
    printf("The max number is: %d", result);

    return 0;
}