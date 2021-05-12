# Merge-Sort-int-double-char
Purpose:
sort an array with O(n * logn) time complexity
the array can be integer, double, character type.

Functions are:
mergeSortInt(array,0,n-1)
mergeSortDouble(array,0,n-1)
mergeSortChar(array,0,n-1)

Parameters are:
1st parameter is an array 
2nd parameter is the lower bound
3rd parameter is the length-1 of the array.

Example:
#include <stdio.h>
#include <string.h>
#include "mergeAlgo.h"

int main()
{
    char ar[1000];
    gets(ar);
    int n = strlen(ar);
    mergeSortChar(ar,0,n-1);

    puts(ar);
    return 0;
}
