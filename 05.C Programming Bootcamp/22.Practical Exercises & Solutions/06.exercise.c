#include <stdio.h>
#include <stdlib.h>

//find nonunique value in array
int main()
{
    int values[10];
    int i;
    int j;

    int nonUniqueCount = 0;
    int foundDuplicate = 0;

    for(i = 0; i < 10; i++)//fill the array
    {
        printf("Enter value #%d:", i + 1);
        scanf("%d",& values[i]);
    }
   
    for(i = 0; i < 10; i++)//Compare array
    {
      
      for(j = 0; j < i; j++)//Compare array
      {
        if(values[i] == values[j])
            foundDuplicate = 1;
            break;
      }
        if(foundDuplicate == 1)
        {
            break;
        }
       
        else
           for(j = i + 1;j < 10; j++)
           {
                if(values[i] == values[j])
                {
                    printf("\nnon-unique value: %d\n", values[i]);
                    nonUniqueCount++;
                    break;
                }
           }
    }
    printf("\nTotal non - unique Nums: %d\n", nonUniqueCount);

    return 0;
}