//Problem-1 (Week-7)
//Program to find both the largest and smallest number of an array of integers.

#include<stdio.h>

void largest_Smallest(int a[100], int n);

void main()
{
    int a[100], i, n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("Enter element a[i]: ");
        scanf("%d", &a[i]);
    }

    largest_Smallest(a, n);

    printf("\nLargest Number in the array = %d", a[n-1]);
    printf("\nSmallest Number in the array = %d", a[0]);
}

void largest_Smallest(int a[100], int n)
{
    int i, j, temp;

    for (i=0; i<n; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}