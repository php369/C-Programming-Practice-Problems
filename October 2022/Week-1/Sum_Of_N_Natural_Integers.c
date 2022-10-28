//Question:21 (Week-1)
//Write a c program to find the sum of N natural integers.

#include<stdio.h>

void main()
{
    int N, sum, i;

    printf("Enter N value:\n");
    scanf("%d", &N);

    sum = 0;
    i = 0;

    L1: if (i <= N)
    {
        sum += i;
        i += 1;
        goto L1;
    }
    printf("Sum of %d natural integers = %d", N, sum);
}