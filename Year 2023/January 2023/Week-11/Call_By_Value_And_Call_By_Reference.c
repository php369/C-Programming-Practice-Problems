//Program-1 (Week-11)
//Program to illustrate call by value and call by reference

#include<stdio.h>

int value(int, int);
void reference(int *, int *);

void main()
{
    int a, b, sum;

    //Illustration for "Call By Value"

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    sum = value(a, b);

    printf("\nSum of %d and %d = %d", a, b, sum);

    //Illustration for "Call By Reference"

    reference(&a, &b);

    printf("\nAfter swapping %d and %d: a = %d and b = %d", b, a, a, b);
}

int value(int a, int b)
{
    return (a+b);
}

void reference(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp; 
}