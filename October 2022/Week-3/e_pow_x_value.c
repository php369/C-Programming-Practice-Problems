//Question:19 (Week-3)
/*Write a c program to print the e^x value without using the built-in exponential 
  function.*/

#include<stdio.h>
#include<math.h>

void main()
{
    int i;
    float actual_value, sum, term, numerator, denominator, x;

    printf("Enter x value: ");
    scanf("%f", &x);

    actual_value = exp(x);

    sum = 1.0;
    term = 1.0;
    numerator = 1.0; 
    denominator = 1.0;

    for (i=1; (actual_value - sum) >= 0.0001; i++)
    {
        numerator *= x;
        denominator *= i;
        term = numerator / denominator;
        sum += term;
    }

    printf("\nCalculated value of e^%f: %f", x, sum);
    printf("\nActual value of e^%f: %f", x, actual_value);
}