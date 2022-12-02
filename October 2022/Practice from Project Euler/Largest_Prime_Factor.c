//Question Link: https://projecteuler.net/problem=3

/*
Question:
What is the largest prime factor of the number 600851475143 ?
*/

#include<stdio.h>
#include<math.h>
#include<time.h>

void main()
{
    int num, prime, i, largest;
    float max_div;
    double time_spent = 0.0;

    clock_t begin = clock();

    largest = 2;
    max_div = sqrt(600851475143);

    for (num=2; num<=max_div; num++)
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
            if (600851475143 % num == 0)
            {
                largest = num;
            }
        }
    }
    printf("Largest prime factor of the number 600851475143: %d", largest); 

    clock_t end = clock();

    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nElapsed time: %f seconds", time_spent);
}