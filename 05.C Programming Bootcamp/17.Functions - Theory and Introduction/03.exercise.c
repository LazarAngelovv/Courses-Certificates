#include <stdio.h>
#include <stdlib.h>

//Function that recives nothing but return value
//Maximum between three numbers
int maxBetween3()
{
    int num1,  num2, num3;
    printf(" Enter num1, num2, num3: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3)
    {
        return num1; 
    }
    else if(num2 > num1 && num2 > num3)
    {
        return num2; 
    }
    else if(num3 > num1 && num3 > num2)
    {
        return num3; 
    }
}

int main()
{
    int max;
    
    max = maxBetween3();
    
    printf("Maximum = %d \n", max);

    return 0;
}

