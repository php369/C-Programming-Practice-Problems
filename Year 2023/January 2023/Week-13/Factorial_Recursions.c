//Program-1 (Week-13)
//Program to find the factorial of a given integer

#include<stdio.h>

int factorial(int n);

void main()
{
    int n;

    printf("Enter any positive integer: ");
    scanf("%d", &n);

    printf("\nFactorial of %d = %d", n, factorial(n));
}

int factorial(int n)           //This function contains 1 statement; if-else is 1 entire statement
{
    if (n==0)
        return 1;
    else
        return (n * factorial(n-1));
}