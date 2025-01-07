#include <stdio.h>
#include <stdlib.h>

//Find min number in a sequence
int findMin(int num)
{
    int minSoFar; 
    int userInput; 

    printf("Enter number: ");
    scanf("%d", &userInput);
  
    if(num > 1)
    {
        minSoFar = findMin(num -1);

        if(userInput < minSoFar)
            return  userInput;
        else
            return minSoFar;
    }
    return userInput;
}

int main()
{
    int num;
    int result;
   
    printf("Enter a number: ");
    scanf("%d", &num);

    result = findMin(num);
    printf("The min number is: %d", result);

    return 0;
}