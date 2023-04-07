//Program to read a 2D array of size nxm and then display them using pointers.

#include<stdio.h>

void main()
{
    int A[10][10], *p, i, j, n, m;

    printf("Enter no. of rows (n): ");
    scanf("%d", &n);

    printf("Enter no. of rows (m): ");
    scanf("%d", &m);

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("Enter element A[%d][%d]: ");
            scanf("%d", &A[i][j]); //OR scanf("%d", *(A+i)+j); OR scanf("%d", *(p+i)+j);
        }
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("\nA[%d][%d] = %d", i, j, *(*(A+i)+j)); //OR printf("\nA[%d][%d] = %d", i, j, *(*(p+i)+j)); OR printf("\nA[%d][%d] = %d", i, j, A[i][j]);
        }
    }
}