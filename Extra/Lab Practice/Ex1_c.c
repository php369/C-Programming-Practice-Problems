#include<stdio.h>

int sum(int);

void main()
{
    int N;

    printf("Enter N value: ");
    scanf("%d", &N);

    printf("\nThe sum of first %d natural numbers = %d", N, sum(N));
}

int sum(int N)
{
    int i, sum=0;

    for (i=1; i<=N; i++)
        sum += i;
    
    return sum;
}