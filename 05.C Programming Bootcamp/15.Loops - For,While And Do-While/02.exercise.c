#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int numOfAsterisks;
   
    printf("Enter num:");
    scanf("%d", &numOfAsterisks);

    while(i < numOfAsterisks)
    {
        printf("*");
        numOfAsterisks--;
    }
    printf("\n");

    return 0;
}   
