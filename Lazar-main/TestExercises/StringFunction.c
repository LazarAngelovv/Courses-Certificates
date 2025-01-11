#include <stdio.h>
#include <ctype.h>

char lowerToUpperUpperToLower(char arr[], int sizeOfArr)
{
    for(int i = 0; i < sizeOfArr; i++)
    {
        if(arr[i] == toupper(arr[i]))
        {
            arr[i] = tolower(arr[i]);
        }
        else if(arr[i] == tolower(arr[i]))
        {
            arr[i] = toupper(arr[i]);
        }
    }
}

void printArr(char arr[], int sizeOfArr)
{
    for(int i = 0; i < sizeOfArr; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main()
{
    char arr[] = "HelloWorld";
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);

    printf("Original string: ");
    printArr(arr, sizeOfArr);

    lowerToUpperUpperToLower(arr, sizeOfArr);
    
    printf("Modified string: ");
    printArr(arr, sizeOfArr);
    
    return 0;
}