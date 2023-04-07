//Question Link: https://projecteuler.net/problem=2

/*
Question:
By considering the terms in the Fibonacci sequence whose values do not exceed four  million, 
find the sum of the even-valued terms.
*/

#include<stdio.h>

void main()
{
    int t1, t2, next, sum;

    t1 = 0;
    t2 = 1;
    sum = 0;

    while (next<=4000000)
    {
        next = t1 + t2;
        if (next % 2 == 0)
        {
            sum += next;
        }
        t1 = t2;
        t2 = next;
    }

    printf("Sum of the even-valued terms not exceeding four million = %d", sum);
}