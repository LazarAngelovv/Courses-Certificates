#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int k;
    int n;
    int blanckSpaces;
    int currentValue = 1;

    printf(" Insert 'n' (number of rows in pyramid): ");
    scanf("%d", &n);

    blanckSpaces = n - 1;

    for(i = 1; i <= n; i++)
    {
        for(k = blanckSpaces; k >=1; k--)
        {
            printf(" ");
        }
        for(j = 1; j <= i;j++)
        {
            printf(" %d", currentValue);
            currentValue +=1;
        }
    printf("\n");
    blanckSpaces--;
    }

    return 0;
}