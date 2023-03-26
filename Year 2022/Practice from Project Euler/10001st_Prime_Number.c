//Link: https://projecteuler.net/problem=7

/*
Question:
What is the 10001st prime number?
*/

#include<stdio.h>
#include<time.h>

void main()
{
    clock_t t;
    t = clock();

    int i, num=2, prime_count=0, prime, prime_num=0;

    while (prime_count < 10001)
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
        {
            prime_count++;
            prime_num = num;
        }

        num++;
    }

    printf("10001st Prime Number = %d", prime_num);

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
 
    printf("\nTime taken to execute the code: %f seconds", time_taken);
}