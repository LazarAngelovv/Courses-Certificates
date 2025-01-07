#include <stdio.h>
#include <stdlib.h>

//Even_Odd count of digit occurances in num
int digitsEvenAppearances(int num, int digit)
{
    int totalAppearancesSoFar;
    if(num < 10)//if num is 1 digit
        if(num != digit)
            return 1;// 0  appearances == > even appearances
        else//num == digit
            return 0;// digit appears once in num ==> odd appearances
    totalAppearancesSoFar = digitsEvenAppearances(num / 10, digit);
    
    if(totalAppearancesSoFar == 1)// So far we had even appearances of digit in num /10
        if(num % 10 == digit)
            return 0;
        else// nothing changed because digit != num %10
            return 1;
    else//totalAppearancesSoFar == 0
        if(num % 10 == digit)
            return 1;
        else
            return 0;

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