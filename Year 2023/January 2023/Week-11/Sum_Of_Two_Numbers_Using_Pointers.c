//Program-2 (Week-11)
//Program to find the sum of two pointers using pointers

#include<stdio.h>

void main()
{
    int a, b, sum;
    int *ap, *bp, *sump;

    ap = &a;
    bp = &b;
    sump = &sum;

    printf("Enter a, b values:\n");
    scanf("%d %d", ap, bp);
    
    *sump = *ap + *bp;
    printf("\nSum of %d and %d = %d", *ap, *bp, *sump);
}