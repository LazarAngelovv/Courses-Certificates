#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, position, newNum, bitStatus;

    printf("Enter any numbers: ");
    scanf("%d", &num);

    printf("Enter nth bit to check and set (0-31): ");
    scanf("%d", &position);

    bitStatus = (num>>position) & 1;
    printf("The %d bit is set to %d\n", position, bitStatus);

    return 0;
}