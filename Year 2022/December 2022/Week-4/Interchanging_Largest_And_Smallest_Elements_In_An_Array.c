//Question:1 (Week-4)
//Program to interchange the largest and smallest numbers in the array.

#include<stdio.h>

void main()
{   
    //Declaring variables and the array
    int n, i, max, min, max_pos, min_pos, temp;
    int a[100];

    //Reading no. of terms in the array
    printf("Enter the no. of terms in the array: ");
    scanf("%d", &n);

    //Assigning terms to the array
    for (i=0; i<n; i++)
    {
        printf("Enter %dth element: ", i);
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    max_pos = 0;
    min_pos = 0;

    //Getting the max and min element and their position
    for (i=1; i<n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_pos = i;
        }

        if (a[i] < min)
        {
            min = a[i];
            min_pos = i;
        }
    }
    
    //Interchanging the largest and smallest element
    temp = a[max_pos];
    a[max_pos] = a[min_pos];
    a[min_pos] = temp;

    printf("\nAfter interchanging the largest and smallest element, the array is:\n");
    for (i=0; i<n; i++)
        printf("%d ", a[i]);
}