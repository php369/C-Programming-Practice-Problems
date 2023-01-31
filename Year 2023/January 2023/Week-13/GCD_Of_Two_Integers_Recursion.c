//Program-8 (Week-13)
//Program to find the GCD (Greatest Common Divisor) of two given integers.

#include<stdio.h>

int gcd(int, int);

void main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("\nGCD of %d and %d = %d", a, b, gcd(a, b));
}

int gcd(int a, int b)
{
    if (b==0)
        return a;
    
    return gcd(b, a % b);
}