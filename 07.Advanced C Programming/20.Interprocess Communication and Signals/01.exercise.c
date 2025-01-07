#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

int main(void)
{
    alarm(5);

    for(int i = 1; i < 10; i++)
    {
        printf("%d\n", i);
        sleep(1);
    }

    return 0;
}