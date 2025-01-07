#include <stdio.h>
#include <stdlib.h>

//Print/Display the Array Values in a Reverse Order.
int main()
{

    int i; 
    int pullUpsArray[10];
    for(i = 0; i <10 ; i++)
    {
        printf("Enter number of pullups on day %d:", i + 1);
        scanf("%d", &pullUpsArray[i]);
    }
    for(i = 9; i >= 0; i--)
    {
        printf("%d days ago you did %d pullups\n", 10 - i - 1, pullUpsArray[i]);
    }
  
  return 0;
}