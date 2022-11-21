//Question Link: https://projecteuler.net/problem=10
/*
Question:
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below 1 lakh.

Note: Due to the limitations of C language, instead of 2 million (which gives precision error), 1 lakh is chosen.
*/

#include<stdio.h>
#include<math.h>
#include<time.h>

void main()
{
    clock_t t;
    t = clock();

    int i, num=2, prime, sum=0;

    while (num < 100000)
    {
        prime = 1;

        for (i=2; i<num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
            sum += num; 

        num++;
    }

    printf("Sum of all primes below 1 lakh = %d", sum);

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
 
    printf("\nTime taken to execute the code: %f seconds", time_taken);
}