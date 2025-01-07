#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//function that check if the given string is palindrom 
bool isPalindrome(char str[])
{
    int len = strlen(str);
    int i, j;
    
    for (i = 0, j = len - 1; i < j; i++, j--)//i starts from 0 - len  j is starting from len - 0
    {
        if (str[i] != str[j])//compare the first and the last letter
            return false;
    }
    
    return true;
}

int main()
{
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    if (isPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    
    return 0;
}
