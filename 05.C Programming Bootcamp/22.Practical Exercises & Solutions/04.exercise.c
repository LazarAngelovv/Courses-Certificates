#include <stdio.h>
#include <stdlib.h>

// program to find if array is sorted 
#define SIZE 5
int main()
{
    int i;
    int arr[SIZE];
    int flag = 2;// 2 = Realy sorted 1 = Sorted 0 = Not sorted

    for(i = 0; i < SIZE ; i++)
    {
        printf("Please enter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for(i = 1; i < SIZE; i++)
    {
        if(arr [i - 1] > arr[i])//element on the left is greater than the element on the right
        {
            flag = 0; //"Not sorted"
            break;
        }
        if(arr [i - 1] == arr[i])
        {
            flag = 1; //"Sorted"("not really sorted")
        }
    }
   
    if(flag == 2)
        printf("The array is Really Sorted!\n");
    
    else if (flag == 1)
        printf("The array is Sorted!\n");
    
    else if(flag == 0)
        printf("The array is not Sorted!\n");
   
   return 0;
}