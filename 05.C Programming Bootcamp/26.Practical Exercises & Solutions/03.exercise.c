#include <stdio.h>
#include <stdlib.h>

//Function that counts total EVEN numbers in sequence
int totalEvenNumbers()
{
    int userInput; 
   
    printf("Enter number: ");
    scanf("%d", &userInput);
    
    if(userInput == -1)
        return 0;
    if(userInput % 2 == 0)

        return  1 + totalEvenNumbers();
    return  totalEvenNumbers();
}

int main()
{
    int totalOccurences;
    totalOccurences = totalEvenNumbers();
    
    printf("Total Occurences of Even numbers in the sequence you inserted is: %d \n", totalOccurences);

    return 0;
}