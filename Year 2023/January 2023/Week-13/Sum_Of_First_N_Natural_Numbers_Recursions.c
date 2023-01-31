//Program-2 (Week-13)
//Program to find the sum of first n natural numbers using recursion.

#include<stdio.h>

int sum(int);

void main()
{
    int n;

    printf("Enter n value: ");
    scanf("%d", &n);

    printf("\nSum of first %d natural numbers = %d", n, sum(n));
}

int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return (n + sum(n-1));
}