#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
//calculate the average sum of array function 
double findArrayAverage(int* arr, int size)
{
    double avgSoFar;
    if( size == 1)
        return arr[0];
    avgSoFar = findArrayAverage(arr + 1, size - 1);
    return(avgSoFar * ( size -1) + arr[0]) / size;
}
int main()
{
    int arr[SIZE] = {1, 4, 3};
    double result; 
    result = findArrayAverage(arr,SIZE);
    printf("%f", result);

    return 0;
}