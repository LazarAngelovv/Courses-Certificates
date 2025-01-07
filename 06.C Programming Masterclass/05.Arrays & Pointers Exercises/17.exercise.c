#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//Function to chek if the sign in the arrays are alternating 
int isArrayAlternatingSign(int* arr, int size)
{
    if(size = 1)
        return 1;
    if(arr[size -1] * arr[size - 2] >= 0)
        return 0;
    return isArrayAlternatingSign(arr, size -1);
}

int isArrayAlternatingSign2(int* arr, int size)
{
    if(size = 1)
        return 1;
    if(arr[size] * arr[1] >= 0)
        return 0;
    return isArrayAlternatingSign2(arr[1], size -1);
}

int main()
{
    int arr[SIZE] = {1, 2, 3, 2, 1};
    int result = isArrayAlternatingSign2(arr, SIZE);
    printf("%d", result);

    return 0;
}
