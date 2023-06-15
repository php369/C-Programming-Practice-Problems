//Program to display the negative elements in an array

#include<stdio.h>

int main()
{
    int n, arr[100], i;

    //Reading array size
    printf("Enter the array size: ");
    scanf("%d", &n);

    //Reading elements to the array
    for (i=0; i<n; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    //Displaying the negative elements from the array
    for (i=0; i<n; i++)
    {
        if (arr[i] < 0)
            printf("%d\n", arr[i]);
    }

    return 0;
}