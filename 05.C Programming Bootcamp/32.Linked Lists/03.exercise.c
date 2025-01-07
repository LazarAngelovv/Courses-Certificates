#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//How to use "bool" Data Types
int main()
{
    bool still_raining = true;
    while(still_raining)
    {
        printf("It's still raining... Rain Rain Rain...\n");
        still_raining = false;
    }
    printf("Oh it stopped raining..Finally a sunny day\n");
    
    return 0;
}