//Question:15 (Week-2)
//Write a c program to find whether the givern integer is even or odd using ternary operators.

#include<stdio.h>

void main()
{
    int n;

    printf("Enter any integer:\n");
    scanf("%d", &n);

    (n % 2 == 0) ? (printf("%d is even number", n)) : (printf("%d is an odd number", n));    
}