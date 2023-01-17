//Question:3 (Week-5)
//Write a c program to add two matrices

#include<stdio.h>

void main()
{
    //Declare variables
    int n, m, M[100][100], N[100][100], i, j;

    //Read n and m values
    printf("Enter no. of rows (n): ");
    scanf("%d", &n);

    printf("Enter no. of cols (m): ");
    scanf("%d", &m);

    printf("\n");

    //Reading the elements of the matrix M
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("Enter element M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("\n");

    //Reading the elements of the matrix N
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("Enter element N[%d][%d]: ", i, j);
            scanf("%d", &N[i][j]);
        }
    }

    //Adding two matrices
    printf("\nAddition of two matrices: ");
    for (i=0; i<n; i++)
    {
        printf("\n");

        for (j=0; j<m; j++)
            printf("%d \t", M[i][j] + N[i][j]);
    }
}