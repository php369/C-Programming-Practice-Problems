//Link: https://projecteuler.net/problem=6

/*
Question:
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include<stdio.h>

void main()
{
    int i, j, sum_of_sqaures=0, sum=0;

    for (i=1; i<=100; i++)
        sum_of_sqaures += i*i;
    
    for (j=1; j<=100; j++)
        sum += j;
    
    printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is %d", ((sum * sum) - sum_of_sqaures));
}