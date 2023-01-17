//Question:5  (Week-5)
//Write a c program to multiply two matrices

#include<stdio.h>

void main()
{
    //Declare variables
    int n, m, q, k, M[10][10], N[10][10], P[10][10], i, j;

    //Read n, m, k values
    printf("\nEnter no. of rows of Matrix M (n): ");
    scanf("%d", &n);

    printf("Enter no. of cols of Matrix M (m): ");
    scanf("%d", &m);

    printf("No. of rows of Matrix N = %d", m);

    printf("\nEnter no. of cols of Matrix N (q): ");
    scanf("%d", &q);

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

    //Printing Matrix M
    printf("\nMatrix M:");

    for (i=0; i<n; i++)
    {
        printf("\n");
        for (j=0; j<m; j++)
        {
            printf("%d ", M[i][j]);
        }
    }

    printf("\n\n");    

    //Reading the elements of the matrix N
    for (i=0; i<m; i++)
    {
        for (j=0; j<q; j++)
        {
            printf("Enter element N[%d][%d]: ", i, j);
            scanf("%d", &N[i][j]);
        }
    }

    //Printing Matrix N
    printf("\nMatrix M:");

    for (i=0; i<m; i++)
    {
        printf("\n");
        for (j=0; j<q; j++)
        {
            printf("%d ", N[i][j]);
        }
    }

    printf("\n");

    //Multiplying two matrices
    printf("\nMultiplication of two matrices: ");

    for (i=0; i<n; i++)
    {
        printf("\n");
        for (j=0; j<q; j++)
        {
            P[i][j] = 0;
            for (k=0; k<m; k++)
            {
                P[i][j] += M[i][k] * N[k][j];
            }
            printf("%d \t", P[i][j]);
        }
    }    
}