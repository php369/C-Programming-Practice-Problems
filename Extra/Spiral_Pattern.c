//Program to print the elements in the order of spiral pattern
/*
Eg: Input: 1 2 3
           4 5 6
           7 8 9

    Output: 1 2 3 6 9 8 7 4 5
*/

#include<stdio.h>

int main()
{
    int A[10][10], i, j, size, dir, left, right, down, top;

    //Reading the size
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    //Reading the matrix A
    for (i=0; i<size; i++)
    {
        for (j=0; j<size; j++)
        {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nFollowing are the elements of the matrix printed in the spiral order: \n");

    dir = 0;
    left = 0;
    right = size-1;
    down = size-1;
    top = 0;

    while (top<=down && left<=right)
    {
        if (dir == 0)
        {
            for (i=left; i<=right; i++)
                printf("%d ", A[top][i]);
            top++;
        }

        if (dir == 1)
        {
            for (i=top; i<=down; i++)
                printf("%d ", A[i][right]);
            right--;
        }

        if (dir == 2)
        {
            for (i=right; i>=left; i--)
                printf("%d ", A[down][i]);
            down--;
        }

        if (dir == 3)
        {
            for (i=down; i>= top; i--)
                printf("%d ", A[i][left]);
            left++;
        }

        dir = (dir + 1) % 4;
    }
}