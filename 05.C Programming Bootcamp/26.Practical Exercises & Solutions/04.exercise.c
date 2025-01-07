#include <stdio.h>
#include <stdlib.h>

//Function that counts the sum of all EVEN numbers in sequence
int totalEvenNumbersSum()
{
    int userInput; 
    
    printf("Enter number: ");
    scanf("%d", &userInput);
    
    if(userInput == -1)
        return 0;
    if(userInput % 2 == 0)

        return  userInput + totalEvenNumbersSum();
    return  totalEvenNumbersSum();
}

int main()
{
    int evenNumbersSum;
    evenNumbersSum = totalEvenNumbersSum();
    printf("The sum of all EVEN numbers is : %d",evenNumbersSum );

    return 0;
}