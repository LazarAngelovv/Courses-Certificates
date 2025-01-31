#include <stdio.h>
#include <stdlib.h>

#define NUM 10

void fillarray(double ar[], int n);
void showarray(const double ar[], int n);
int mycomp(const void *p1, const void *p2);

int main()
{
    double vals[NUM];
    fillarray(vals, NUM);
    puts("Random List: ");
    showarray(vals, NUM);

    qsort(vals, NUM, sizeof(double), mycomp);
    puts("Sorted list");
    showarray(vals, NUM);

    return 0;
}

void showarray(const double ar[], int n)
{
    int index;

    for (index = 0; index < n; index++)
    {
        printf("%9.4f", ar[index]);
        if (index % 6 == 5)
            putchar('\n');
    }
    if (index % 6 != 0)
        putchar('\n');
}

int mycomp(const void *p1, const void *p2)
{
    const double *a1 = (const double *)p1;
    const double *a2 = (const double *)p2;

    if (*a1 < *a2)
        return -1;
    else if (*a1 == *a2)
        return 0;
    else
        return 1;
}

void fillarray(double ar[], int n)
{
    int index;

    for (index = 0; index < n; index++)
    {
        ar[index] = (double)rand() / RAND_MAX;
    }
}
