#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sum = 0;
    int size = 0;
    int arr[size];
    
    printf("Please enter the size of the array\n");
    scanf("%d",&size);

    printf("Enter %d element in the array: ", size);

    for( i = 0 ; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for( i = 0 ; i < size ; i++)
    {
        sum = sum + arr[i];
    }
    
    printf("\nSum of all elements of array = %d", sum);

    return 0;
}