//Program-3 (Week-13)
//Program to find the nth term in a fibonacci series using recursion concepts

#include<stdio.h>

int nth_fibonacci_term(int);

void main()
{
    int n;

    printf("Enter n value: ");
    scanf("%d", &n);

    printf("%dth fibonacci term = %d", n, nth_fibonacci_term(n));
}

int nth_fibonacci_term(int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else 
        return (nth_fibonacci_term(n-1) + nth_fibonacci_term(n-2)); //First left hand side is executed first
}