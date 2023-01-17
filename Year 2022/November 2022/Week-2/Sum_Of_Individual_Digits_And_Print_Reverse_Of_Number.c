//Question:1 (Week-2)

#include<stdio.h>

void main()
{
    int n, N, sum, d, Rev;

    printf("Enter any positive integer:\n");
    scanf("%d", &n);

    N = n; 
    sum = 0;

    L1: if (n > 0)
    {
        d = n % 10;
        sum += d;
        n /= 10;
        
        goto L1;
    }

    Rev = 0;

    L2: if (N > 0)
    {
        d = N % 10;
        Rev = (Rev * 10) + d;
        N /= 10;

        goto L2;
    }

    printf("Sum of the posotive integer: %d", sum);
    printf("\nReversed number: %d", Rev);
}