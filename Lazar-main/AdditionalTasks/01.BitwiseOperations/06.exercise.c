#include <stdio.h>
/*Задача 6.

На C напишете код, който да връща 1, когато е TRUE и 0, когато e FALSE за следните ситуации
за int x:
A. Който и да е бит на x e 0
B. Който и да е бит на x e 1
C. Който и да е бит на least-significant (най-десния) байт на x e 1
D. Който и да е бит на most-significant (най-левия) байт на x e 0*/

int checkConditionA(int x) 
{
    if (x == 0) 
    {
        return 1;  // TRUE
    } 
    else 
    {
        return 0;  // FALSE
    }
}

int checkConditionB(int x) 
{
    if (x != 0) 
    {
        return 1;  
    } 
    else 
    {
        return 0;  
    }
}

int checkConditionC(int x)
 {
    unsigned int mask = 0xFF; // Mask to extract the last byte

    unsigned int lastByte = x & mask;
    if (lastByte) 
    {
        return 1;  
    } 
    else 
    {
        return 0;  
    }

}

int checkConditionD(int x) 
{
    unsigned char mostSignificantByte = (unsigned char)(x >> (sizeof(int) - 1) * 8);
    if (mostSignificantByte) 
    {
        return 1;  
    } 
    else 
    {
        return 0;  
    }
}

int main() 
{
    int x = 123456789;  // Sample value for variable x
    
    // Execute the conditions and print the results
    printf("Condition A: %d\n", checkConditionA(x));
    printf("Condition B: %d\n", checkConditionB(x));
    printf("Condition C: %d\n", checkConditionC(x));
    printf("Condition D: %d\n", checkConditionD(x));
    
    return 0;
}