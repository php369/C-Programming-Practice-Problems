#include<stdio.h>

int sum(int *, int *);

void main()
{
    int a=2, b=3;
    int *ip1, *ip2;

    ip1 = &a;
    ip2 = &b;

    printf("%d + %d = %d", *ip1, *ip2, sum(ip1, ip2));
}

int sum(int *a, int *b)
{
    return (*a + *b);
}