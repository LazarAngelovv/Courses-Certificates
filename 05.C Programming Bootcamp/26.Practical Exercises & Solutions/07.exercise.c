#include <stdio.h>
#include <stdlib.h>

//Lucas sequence
int lucasSequence(int num)
{
    if(num == 0)
        return 2;
    if(num == 1)
        return 1;
    return lucasSequence(num - 1) + lucasSequence (num - 2);
}

int lucasNotRecursive(int num)
{
    int previous = 2;
    int current = 1;
    int temp;
    
    if(n == 0)
        return 2;
    if(n == 1)
        return 1;
    for(i = 2; i < = n; i++)
    {
        temp = previous + current;
        previous = current;
        current = temp;
    }
    return current;
}

int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Lucas Value at Index %d = %d\n",num, lucasSequence(num));

    return 0;
}