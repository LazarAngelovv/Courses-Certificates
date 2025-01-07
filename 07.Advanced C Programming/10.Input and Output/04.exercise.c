#include <stdio.h>
#include <stdlib.h>

int isEven(const int num)
{
    return !(num & 1);
}

int isPrime(const int num)
{
    int i = 0;

    if (num < 2)
        return 0;

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    FILE *fPtrIn = NULL;
    int num = 0, success = 0;
    fPtrIn = fopen("numbers.txt", "r");

    if (fPtrIn == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check whether the file exists and you have read/write permissions.\n");
        exit(EXIT_FAILURE);
    }

    printf("File opened successfully. Reading integers from the file.\n\n");

    while (fscanf(fPtrIn, " %d", &num) == 1)
    {
        if (isPrime(num))
            printf("Prime number found: %d\n", num);
        else if (isEven(num))
            printf("Even number found: %d\n", num);
        else
            printf("Neither prime nor even number found: %d\n", num);
    }

    fclose(fPtrIn);

    return 0;
}
