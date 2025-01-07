#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
// Function to find the sum of array
int findSumArray(int* arr, int size)
{
    int i, sum = 0;
    for(i = 0; i < size; i++)
    {
        sum = sum  + arr[i];
    }
    return sum;
}
//Function to find the average of array values
double findAverage(int *arr, int size)
{
    int sumOfArray;
    sumOfArray = findSumArray(arr,size);
    
    return sumOfArray / size;
}

int main()
{
    int grades[SIZE] = {80, 85, 72, 90};
    double average ;
    average = findAverage(grades, SIZE);
    
   return 0;
}