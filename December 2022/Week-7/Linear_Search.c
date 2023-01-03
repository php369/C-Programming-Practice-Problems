//Problem-2 (Week-7)
//Program to linear search

#include<stdio.h>

int linearSearch(int a[100], int, int);

void main()
{
    int a[100], element, i, n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("Enter element a[i]: ");
        scanf("%d", &a[i]);
    }

    printf("\nElement to search: ");
    scanf("%d", &element);

    if (linearSearch(a, n, element))
        printf("\nElement %d found", element);
    else
        printf("\nElement %d not found", element);
}

int linearSearch(int a[100], int n, int element)
{
    int i;

    for (i=0; i<n; i++)
    {
        if (a[i] == element)
            break;
    }

    if (i == n)
        return 0;
    else   
        return 1;
}