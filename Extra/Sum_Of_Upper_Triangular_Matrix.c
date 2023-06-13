//Program to find the sum of upper triangular matrix

#include<stdio.h>

int main()
{
    int i, j, A[10][10], sum = 0, size;

    //Reading the row and col size of the matrix
    printf("Enter the size of the matrix A: ");
    scanf("%d", &size);

    //Reading the Matrix A
    for (i=0; i<size; i++)
    {
        for (j=0; j<size; j++)
        {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (i=0; i<size; i++)
    {
        for (j=0; j<size; j++)
        {
            if (i<=j)
                sum += A[i][j];
        }
    }

    //Result
    printf("\nSum of the Upper Triangular Elements: %d", sum);
}