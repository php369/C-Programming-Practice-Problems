//Write a c program to compute simple interest for given input values.

#include<stdio.h>

void main()
{
    float P, R, T, SI;

    printf("Enter the values of Principal(P), Rate(R), Time Period(T):\n");
    scanf("%f %f %f", &P, &R, &T);

    SI = (P * R * T) / 100;

    printf("Simple Interest = %f", SI);
}