#include <stdio.h>
#include <stdlib.h>

//Greeting function
void printGreeting()
{
    printf("Hello \n");
    printf("Welcome\n");
    printf("Good Luck!\n");
}

int main()
{
    printf("Hello to this program. I'm writing from main function.\n");
    printGreeting();
    printf("Now I'm after the function.Also at 'main' \n");

    return 0;
}

