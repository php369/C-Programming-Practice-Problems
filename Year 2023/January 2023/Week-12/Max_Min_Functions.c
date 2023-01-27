//Program-1 (Week-12)
//Program to find minimum and maximum element in a given list of n element using functions.

#include<stdio.h>

int min_element(int a[], int);
int max_element(int *, int);

void main()
{
    int a[100], n, i, min, max;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    min = min_element(a, n);
    max = max_element(a, n);

    printf("\nMinimum element = %d \nMaximum element = %d", min, max);
}

int  min_element(int a[], int n)
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

    return a[0];
}

int max_element(int a[], int n)
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

    return a[n-1];
}