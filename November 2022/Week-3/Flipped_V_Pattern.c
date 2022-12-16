//Question:12 (Week-3)
/*Write a c program to print the following star pattern:
  * * * * * * *
  * * *   * * *
  * *       * *
  *           *                      */

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
            if ((row + col) <= (n - 1))
                printf("* ");
            else
                printf("  ");
        }

        printf("\b\b");
        

        for (col=0; col<n; col++)
        {
            if (col >= row)
                printf("* ");
            else
                printf("  ");
        }
    }
}