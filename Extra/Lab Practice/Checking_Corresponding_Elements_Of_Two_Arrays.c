//Program to find whether 2 arrays are containing the same element in same index position using pointers

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, j, *ip;
    
    //Reading the size of the array
    printf("Enter the size of arrays A and B: ");
    scanf("%d", &n);
    
    ip = (int *)malloc(2 * n * sizeof(int));
    
    for (i=0; i<n; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", ip+i);
    }

    j=i;

    for (i=j; i<(2*n); i++)
    {
        printf("B[%d]: ", i-j);
        scanf("%d", ip+i);
    }
    
    for (i=0; i<n; i++)
    {
        if (*(ip+i) != (*(ip+i+n)))
        {
            printf("no");
            break;
        }
        
        if (i == n-1)
            printf("yes");
    }
    
    return 0;
}