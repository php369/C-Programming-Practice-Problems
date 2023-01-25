#include<stdio.h>

void fun(int, int, int, int, int, int, int);

void main()
{
    int a = 5;

    fun(a, a++, ++a, a++, a++, ++a, ++a);
}

void fun(int a, int b, int c, int d, int e, int f, int g)
{
    printf("%d %d %d %d %d %d %d", a, b, c, d, e, f, g);
}