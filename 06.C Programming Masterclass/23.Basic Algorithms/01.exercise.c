#include <stdio.h>
#include <stdlib.h>

int *merge2SortedArraysOpt2(int* a, int* b, int n, int m)
{
    int i = 0;
    int j = 0;
    int k = 0;

    int* c
    //Dynamic Memory Allocation..(m + n) size.
    //c = ...

    while(i < n && j <m)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    //Copying all the elements of array a...
    while(i < n)
        c[k++] = a[i++];
    //Copying all the elements of array b...
    while(j < m)
        c[k++] = b[j++];

    return c;
}

int main()
{
    int a[N] = {1 ,3 ,4, 6};
    int b[M] = { 2, 5, 7 };
    int* c = merge2SortedArraysOpt2(a ,b, N, M);

    return 0;
}