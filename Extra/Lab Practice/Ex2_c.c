#include<stdio.h>

int fact(int);

void main()
{
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Product of first %d natural numbers = %d", N, fact(N));
}

int fact(int N)
{
    int i, product=1;

    for (i=1; i<=N; i++)
    {
        product *= i;
    }

    return product;
}