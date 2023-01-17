//Question:16 (Week-2)
//Write a c program to print all even numbers between 1 to n using simple if statement.

#include<stdio.h>

void main()
{
    int n, i=1;

    printf("Enter n value:\n");
    scanf("%d", &n);

    printf("Following are all the even numbers between 1 to %d:\n", n);

    L1: if (i < n)
    {
        if (i % 2 == 0)
            printf("%d ", i);
        
        i++;
        goto L1;
    }
}