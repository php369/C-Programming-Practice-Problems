//Link: https://projecteuler.net/problem=5
 
/*
Question:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include<stdio.h>

void main()
{
    int i, num=2520, count=0;

    L1: for (i=1; i<=20; i++)
    {
        if (num % i == 0)
            count++;
    }

    while (count != 20)
    {
        num += 20;
        count = 0;
        goto L1;
    }

    printf("The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is %d", num);
}