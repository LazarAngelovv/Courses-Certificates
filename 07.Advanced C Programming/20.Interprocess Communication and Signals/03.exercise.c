#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <time.h>

void handler_dividebyzero(int signum);
void signalHandler(int signalValue);

int main()
{
    int i;
    int x;

    signal(SIGINT, signalHandler);  // Set up signal handler for SIGINT

    srand(time(NULL));  // Seed the random number generator based on current time

    for (i = 1; i <= 100; i++)
    {
        x = 1 + rand() % 50;  // Generate random numbers in the loop
    }

    if (x == 25)
    {
        raise(SIGINT);  // Raise SIGINT signal if x equals 25
    }

    printf("%4d", i);

    if (i % 10 == 0)
    {
        printf("\n");
    }

    return 0;
}

void handler_dividebyzero(int signum)
{
    if (signum == SIGFPE)
    {
        printf("Received SIGFPE, Divide by Zero Exception\n");
        exit(0);
    }
    else
    {
        printf("Received %d Signal\n", signum);
        return;
    }
}

void signalHandler(int signalValue)
{
    int response;
    printf("%s%d%s\n%s", "Interrupt signal (", signalValue, ") received. ", "Do you wish to continue (1 = yes or 2 = no)? ");
    scanf("%d", &response);

    while (response != 1 && response != 2)
    {
        printf("(1 = yes or 2 = no)? ");
        scanf("%d", &response);
    }

    if (response == 1)
    {
        signal(SIGINT, signalHandler);  // Set up signal handler again for SIGINT
    }
    else
    {
        exit(EXIT_SUCCESS);  // Exit the program
    }
}
