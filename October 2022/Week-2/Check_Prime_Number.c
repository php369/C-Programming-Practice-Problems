//Question:5 (Week-2)

#include<stdio.h>

void main()
{
    int n, count, i;

    printf("Enter any positive integer:\n");
    scanf("%d", &n);

    count = 0;
    i = 1;

    L1: if (i <= n)
    {
        if (n % i == 0)
            count++;
        
        i++;

        goto L1;
    }

    if (count == 2)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
}