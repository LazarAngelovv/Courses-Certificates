#include <stdio.h>
#include <stdlib.h>

//Summing up all the numbers from "1" up to "num"
//that can be divided by "3" and "5" 
int main()
{
    int num;
    int i;
    int sum = 0;

    printf("Enter num: ");
    scanf("%d", &num);
    
    for(i = 15; i < num; i = i + 15)
    {
        printf("%d can be divide by both 3 & 5\n",i);
        sum = sum + i;
    }
    printf("Sum = %d\n", sum);

    return 0; 
}