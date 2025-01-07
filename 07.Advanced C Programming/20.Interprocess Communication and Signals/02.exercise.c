#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void handler_dividebyzero(int signum)
{
    printf("Divide by zero error!\n");
    // Additional error handling code can be added here if needed
    exit(1);
}

int main()
{
    int result = 0;
    int v1 = 0;
    int v2 = 0;

    void(*sigHandlerReturn)(int);

    sigHandlerReturn = signal(SIGFPE, handler_dividebyzero);

    if(sigHandlerReturn == SIG_ERR)
    {
        perror("Signal Error: ");
        return 1;
    }

    // Perform division operation that may result in division by zero
    result = v1 / v2;

    return 0;
}
