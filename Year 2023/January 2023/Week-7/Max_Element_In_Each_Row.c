//Program-4 (Week-7)
//Program to find the maximum element in each row of a given n x m matrix using function.

#include<stdio.h>

void max_in_each_row(int a[][10], int row, int col);

void main()
{
    int a[10][10], n, m, i, j;
    
    //Read n and m values
    printf("Enter no. of rows (n): ");
    scanf("%d", &n);

    printf("Enter no. of cols (m): ");
    scanf("%d", &m);

    printf("\n");

    //Reading the elements of the matrix a
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    max_in_each_row(a, n, m);
}

void max_in_each_row(int a[][10], int row, int col)
{
    int i, j, m;

    for (i=0; i<row; i++)
    {
        m = a[i][0];
        for (j=0; j<col; j++)
        {
            if (m < a[i][j])
                m = a[i][j];
        }
        printf("\nMax of %dth row = %d", i+1, m);
    }
}