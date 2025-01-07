#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
char areAllLetterIncluded(char *seq1 ,char *seq2,int size1, int size2)
{
    int i;
    int countArr[26] = {0};

    for(i = 0; i < size2; i++)
    {
        countArr[seq2[i] - 'a']++;
    }
    for(i = 0; i < size1; i++)
    {
       countArr[seq1[i] - 'a']--;
       if(countArr[i] < 0)
         return 0;
    }
    return 1;
}

int main()
{
    char seq1[] = {'a','b','c','d','e'};
    char seq2[] = {'a','b','c','d','e'};
    int result = areAllLetterIncluded(seq1, seq2, SIZE, SIZE);

    return 0;
}