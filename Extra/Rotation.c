//Program to perform a rotation of elements
/*
Eg: 
Input:  1 2 3 4 5
Output: 3 4 5 1 2
*/

#include<stdio.h>

void main()
{
    int n, i, j, e, arr[100], temp;

    //Reading array size
    printf("Enter array size: ");
    scanf("%d", &n);

    //Reading array
    for (i=0; i<n; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    //Reading the index from which rotation is to be performed
    printf("\nEnter the index from which the rotation is to be performed: ");
    scanf("%d", &e);

    //Performing rotation
    for (j=0; j<e; j++)
    {
        for (i=0; i<n-1; i++)
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    printf("\n");

    //Printing the rotated array
    for (i=0; i<n; i++)
        printf("%d ", arr[i]);
}