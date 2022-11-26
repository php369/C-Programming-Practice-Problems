//Question:17 (Week-3)
/*Write a c program to print the following star pattern:
        a
      b b b
    c c c c c
  d d d d d d d                     */

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
                printf("%c ", row+97);
            else
                printf("  ");
        }

        printf("\b\b");
        

        for (col=0; col<n; col++)
        {
            if (row >= col)
                printf("%c ", row+97);
            else
                printf("  ");
        }
    }
}