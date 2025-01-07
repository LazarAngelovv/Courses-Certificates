#include <stdio.h>
#include <stdlib.h>

//Program that check and print if the array has at least one element with "good neighbors".
//An element with good neighbors has value that equals to the multiplication of both  its neighbors (right, left)
//Example [2, 6, 3]

#define SIZE 5


int main()
{
    int myArr[SIZE];
    int i;
    int hasGoodNeighbors = 0;

    for(i = 0; i < SIZE ; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &myArr[i]);
    }

    for(i = 1; i < SIZE -1; i++)
    {
        if(myArr[i] == myArr[i - 1] * myArr [i + 1])
        {
            printf("This Array Has Good Neighbors!\n");
        }
    }
    printf("This Array doesn't have any Good Neighbors \n");
    
    return 0;
}