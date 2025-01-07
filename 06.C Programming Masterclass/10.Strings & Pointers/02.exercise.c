#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charsArray[] = {'H', 'e', 'l','l','o',' \0'};
    char str[] = "Hello";

    char *str2 = "Hello";
    str2[0] = 'G';
    str[0] = 'G';
  
    printf("str before = %s\n",str);
    printf("str2 before %s \n", str2);

    str2 = "Good-Bye";

    printf("str after = %s\n", str);
    printf("str2 after = %s\n", str2);
    
    return 0;
}