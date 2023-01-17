//Week-6 (Problem-1)
//Program to find a factorial of a given natural number using user defined function.

#include<stdio.h>

int fact(int);

void main()
{
    int f, y;

    printf("Enter f: ");
    scanf("%d", &f);

    y = fact(f);

    printf("\nFactorial(%d) = %d", f, y); 
}

int fact(int x)
{
    int y=1, i;

    for (i=1; i<=x; i++)
        y *= i;
    
    return y;
}