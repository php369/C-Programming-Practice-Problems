//Program-3 (Week-11)
//Program to find the sum of two numbers using pointers and functions

#include<stdio.h>

int sumfun(int *, int *);

void main()
{
    int a, b, sum;
    int *ap, *bp, *sump;

    ap = &a;
    bp = &b;
    sump = &sum;

    printf("Enter a, b values:\n");
    scanf("%d %d", ap, bp);
    
    *sump = sumfun(ap, bp);
    printf("\nSum of %d and %d = %d", *ap, *bp, *sump);
}

int sumfun(int *ap, int *bp)
{
    return (*ap + *bp);
}