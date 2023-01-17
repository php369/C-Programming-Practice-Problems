//Question:20 (Week-3)
/*Write a c program to print the e^x value without using the built-in exponential 
  function.*/

#include<stdio.h>
#include<math.h>

void main()
{
    int i, loop_count=0;
    double actual_value, sum, term, numerator, denominator, x;

    printf("Enter x value: ");
    scanf("%lf", &x);

    actual_value = sin(x);

    sum = x;
    term = 1.0;
    numerator = x; 
    denominator = 1.0;

    for (i=1; abs(actual_value - sum) >= 0.000000001; i)
    {
        numerator *= x * x * (-1.0);
        denominator *= (2 * i) * ((2 * i) + 1);
        term = numerator / denominator;
        sum += term;
        //loop_count++;
        //printf("\nLoop Count: %d", loop_count);
        printf("\nSum: %lf", sum);
    }

    printf("\nCalculated value of sin(%lf): %lf", x, sum);
    printf("\nActual value of sin(%lf): %lf", x, actual_value);
}