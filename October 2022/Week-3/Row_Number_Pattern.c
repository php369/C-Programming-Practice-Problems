//Question:16 (Week-3)
/*Write a c program to print the following star pattern:
        1
      2 2 2
    3 3 3 3 3
  4 4 4 4 4 4 4                     */

#include<stdio.h>

void main()
{
    int n, row, col;

    printf("Enter the no. of rows of the pattern you want to print: ");
    scanf("%d", &n);

    for (row=0; row<n; row++)
    {
        printf("\n");

        for (col=0; col<n; col++)
        {
            if ((row + col) >= (n - 1))
                printf("%d ", row+1);
            else
                printf("  ");
        }

        printf("\b\b");
        

        for (col=0; col<n; col++)
        {
            if (row >= col)
                printf("%d ", row+1);
            else
                printf("  ");
        }
    }
}