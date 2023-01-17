//Question:2 (Week-4)
//Program to search an element in an array.

#include<stdio.h>

void main()
{
    //Declaring variables and the array
    int n, i, element, flag;
    int a[100];

    //Reading the no. of terms in the array
    printf("Enter the no. of terms in the array: ");
    scanf("%d", &n);

    //Assigning terms to the array
    for (i=0; i<n; i++)
    {
        printf("Enter %dth element: ", i);
        scanf("%d", &a[i]);
    }

    //Asking the element to search
    printf("Enter the element you want to search for: ");
    scanf("%d", &element);

    flag = 0;
    
    //Searching the element in the array
    for (i=0; i<n; i++)
    {
        if (a[i] == element)
        {
            flag = 1;
            break;
        }
    }

    if (flag==1)
        printf("Element %d is found in the array.", element);
    else
        printf("Element %d is not found in the array.", element);
}