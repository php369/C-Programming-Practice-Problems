//Program to read an array of n integers and display them using pointers.

#include<stdio.h>

void main()
{
    int A[100], *p, i, n;

    p = A;

    printf("Enter the size of array:");
    scanf("%d", &n);

    printf("\n");
    
    for (i=0; i<n; i++)
    {
        printf("Enter element A[%d]: ", i);
        scanf("%d", &A[i]);
    } 

    for (i=0; i<n; i++)
        printf("\nA[%d] = %d", i, *(A + i)); //Or printf("\nA[%d] = %d", i, *(p + i));
}