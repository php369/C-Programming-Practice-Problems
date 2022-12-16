//Question:3 (Week-4)
//Program to sort array elements

#include<stdio.h>

void main()
{
    //Declaring variables and the array
    int n, i, j, temp;
    int a[n];

    //Reading the no. of terms in the array
    printf("Enter the no. of terms in the array: ");
    scanf("%d", &n);

    //Assigning terms to the array
    for (i=0; i<n; i++)
    {
        printf("Enter %dth element: ", i);
        scanf("%d", &a[i]);
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    //Printing the sorted array
    printf("\nAfter ascending sorting, the array is:\n");
    for (i=0; i<n; i++)
        printf("%d ", a[i]);
}