//Program to multiply two matrices (3x3)

#include<stdio.h>

int main()
{
    int i, j, k, A[3][3], B[3][3], C[3][3];

    //Reading the Matrix A
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n");

    //Reading the Matrix B
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    //Multiplying Matrix A and Matrix B
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            C[i][j] = 0;
            for (k=0; k<3; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("\nMultiplying Matrix A and B, the output is: \n");
    
    //Displaying the resulting matrix
    for (i=0; i<3; i++)
    {
        printf("\n");
        for (j=0; j<3; j++)
            printf("%d \t", C[i][j]);
    }
}