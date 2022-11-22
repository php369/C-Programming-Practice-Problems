//Question:4 (Week-3)
/*Program to print the following triangle star pattern:
    *
   ***
  *****
 *******
*********                                */
                                          
#include<stdio.h>

void main()
{
    int row, col, n, space, odd_count=1;

    //Asking the user how many rows of the pattern he/she wants to print
    printf("Enter the no. of rows of the pattern you want to print:\n");
    scanf("%d", &n);

    printf("\n");

    for (row=1; row<=n; row++)
    {
        //For Spaces
        for (space=n-1; space>=row; space--)
            printf(" ");

        //For Stars
        for (col=1; col<=odd_count; col++)
            printf("*");

        printf("\n");

        odd_count += 2;
    }
}