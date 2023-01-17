//Week-6(Problem-3)
//Program to find e^x using user defined function.

#include<stdio.h>
#include<math.h>

float epowerx(float);

void main()
{
    float x, sum;

    printf("Enter x: ");
    scanf("%f", &x);

    sum = epowerx(x);

    printf("Actual value for e^(%f) = %f", x, exp(x));
    printf("\ne^(%f) = %f", x, sum);
}

float epowerx(float x)
{
    int i;
    float sum, term, numerator, denominator, act;

    sum = 1.0;
    term = 1.0;
    numerator = 1.0;
    denominator = 1.0;

    act = exp(x);

    for (i=1; (act - sum) >= 0.0001; i++)
    {
        numerator *= x;
        denominator *= i;
        term = numerator / denominator;
        sum += term;
    }

    return sum;
}