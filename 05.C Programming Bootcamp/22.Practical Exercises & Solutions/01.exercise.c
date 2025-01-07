#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
// copy data from one array to another
int main()
{
    int date[SIZE] = {1, 2, 2000};
    int date2[SIZE];
    int i;

    for(i = 0; i < SIZE; i++)
    {
        date2[i] = date[i];
    }
    for(i = 0; i < SIZE; i++)
    {
        printf("\noriginal_date[%d] = %d\n", i, date[i]);
        printf("\ncopied_date[%d] = %d\n", i, date2[i]);
    }

    return 0;
}