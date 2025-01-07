#include <stdio.h>
#include <stdlib.h>

void sign_off(void){
    puts("in sign_off...");
}
void too_bad(void){
    puts("in too_bad...");
}

int main(void)
{
    int n = 0;

    atexit(sign_off);
    puts("Enter an integer: ");

    if(scanf("%d", &n) != 1)
    {
        puts("That's not integer!");
        atexit(too_bad);
        exit(EXIT_FAILURE);
    }

    return 0;
}
