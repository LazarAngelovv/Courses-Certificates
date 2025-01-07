#include <stdio.h>
#include <stdlib.h>

//Function to find if digits are ascending or descending 
int digitsSorted(int num)
{
    int units = num % 10;
    int tens = (num / 10) % 10;
    int sortedSoFar;
     
    if (num < 100)
        if(tens > units)
            return 1;
        else //units < tens
            return -1;

    sortedSoFar = digitsSorted(num / 10); 

    if(sortedSoFar == 1 && tens < units)
        return 1;
    if(sortedSoFar == -1 && tens > units)
        return -1;
    
    return 0;
}
int main()
{
    int num;
    int result; 
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    result = digitsSorted(num);
    printf("%d", result);

    return 0;
}