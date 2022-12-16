//Question:17 (Week-2)
//Write a c program to find whether the given number can be divisible by 3 and 5 or not using if-else statement.

#include<stdio.h>

void main()
{
    int n;

    printf("Enter any integer:\n");
    scanf("%d", &n);

    if ((n % 3 == 0) && (n % 5 == 0))
        printf("%d is divisible by 3 and 5", n);
    else
        printf("%d is not divisible by 3 and 5", n);
}