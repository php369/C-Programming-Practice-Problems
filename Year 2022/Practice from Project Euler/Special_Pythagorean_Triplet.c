//Question Link: https://projecteuler.net/problem=9
/*
Question:
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include<stdio.h>
#include<time.h>

void main()
{
    clock_t t;
    t = clock();

    int a, b, c, sum, limit=1000, LHS, RHS;

    for (a=1; a<=limit; a++)
    {
        for (b=1;b<=limit; b++)
        {
            c = limit - a - b;

            if ((a < b) && (a < c) && (b < c))
            {
                LHS = (a*a) + (b*b);
                RHS = (c*c);

                if (LHS == RHS)
                {
                    sum = a + b + c;

                    if (sum == 1000)
                    {
                        printf("Product abc = %d", a * b * c);
                        break;
                    }
                }
            }
        }
    }

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
 
    printf("\nTime taken to execute the code: %f seconds", time_taken);
}