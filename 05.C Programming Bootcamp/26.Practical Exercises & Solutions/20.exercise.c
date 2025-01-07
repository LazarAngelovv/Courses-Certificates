#include <stdio.h>
#include <stdlib.h>

//Even_Odd count of digit occurances in num
//Minimized and optimized solution
int digitsEvenAppearances(int num, int digit)
{
    int totalAppearancesSoFar;
    if(num < 10)//if num is 1 digit
        if(num != digit)
            return 1;// 0  appearances == > even appearances
        else//num == digit
            return 0;// digit appears once in num ==> odd appearances
        if(num % 10 == digit)
            return digitsEvenAppearances(num / 10, digit);
        else
            return !digitsEvenAppearances(num / 10, digit);
}

int main()
{
    int digit; 
    int num;
    int result;

    printf("Enter digit: ");
    scanf("%d", &digit);

    printf("Enter num: ");
    scanf("%d", &num);

    result = digitsEvenAppearances(num, digit);
    printf("%d", result);

    return 0;
}