//Program to find the repeating numbers in an array

#include<stdio.h>

void main()
{
    int n, arr[100], i, j, count=0;

    //Reading array size
    printf("Enter the array size: ");
    scanf("%d", &n);

    //Reading elements of the array
    for (i=0; i<n; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (i=0; i<n; i++)
    {
        for (j=i; j<n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        printf("%d->%d\n", arr[i], count);
        count = 0;
    }
}