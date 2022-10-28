//Question: 24 (Week-1)
//Write a c program to print ASCII Table.

#include<stdio.h>

void main()
{
    int decimal, total;

    decimal = 32;
    total = 126;

    L1: if (decimal <= total)
    {
        printf("\n%d %c", decimal, decimal);
        decimal += 1;
        goto L1;
    }
}