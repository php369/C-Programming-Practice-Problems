//Question:2 (Week-5)
//Write a c program to transpose a matrix

#include<stdio.h>

void main()
{
    //Declare variables
    int n, m, M[100][100], i, j;

    //Read n and m values
    printf("Enter no. of rows (n): ");
    scanf("%d", &n);

    printf("Enter no. of cols (m): ");
    scanf("%d", &m);

    //Reading the elements of the matrix
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("Enter element M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    //Transposing the matrix
    printf("\nTranspose of the given matrix: ");

    for (i=0; i<m; i++)
    {
        printf("\n");

        for (j=0; j<n; j++)
            printf("%d ", M[j][i]);
    }
}