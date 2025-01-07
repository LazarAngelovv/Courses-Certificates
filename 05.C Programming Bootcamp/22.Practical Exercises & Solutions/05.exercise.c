#include <stdio.h>
#include <stdlib.h>

//find unique value in array
int main()
{
    int values[10];
    int i;
    int j;

    int uniqueCount = 0;
    int foundDuplicate = 0;

    for(i = 0; i < 10; i++)
    {
        printf("Enter value #%d:", i + 1);//Fill array
        scanf("%d",& values[i]);
    }
    
    for(i = 0; i < 10; i++)//Compare array
    {
      for(j = 0; j < 10; j++)//Compare array 
      {
        if(i == j)
            continue;
        if(values[i] == values[j])
            foundDuplicate = 1;
      }
    
        if(foundDuplicate != 1)
        {
            printf("Unique Value: %d\n", values[i]);
            uniqueCount++;
        }
        else
           foundDuplicate = 0;
    }
    printf("Unique Cout is: %d", uniqueCount);

    return 0;
}