#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>


#define MAX_COUNT 10

void childProcess(void);
void parentProcess(void);

int main(void)
{
    pid_t pid;
    pid = fork();

    // Fork a child process
    if (pid == 0)
        childProcess();
    // Parent process
    else if (pid > 0)
        parentProcess();
    // Fork failed
    else
    {
        printf("fork() failed!\n");
        return 1;
    }

    return 0;
}

// Behavior of the child process
void childProcess(void)
{
    int i;
    // Iterate from 1 to MAX_COUNT
    for (i = 1; i <= MAX_COUNT; i++)
    {
        printf("This line is from child, value = %d\n", i);
    }
    // Child process completion message
    printf("*** Child process is done ***\n");
}

// Behavior of the parent process
void parentProcess(void)
{
    int i;
    // Iterate from 1 to MAX_COUNT
    for (i = 1; i <= MAX_COUNT; i++)
    {
        printf("This line is from parent, value = %d\n", i);
    }
    // Parent process completion message
    printf("*** Parent is done ***\n");
}
