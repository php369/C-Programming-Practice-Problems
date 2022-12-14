//Question:6 (Week-3)
/*Program to print the following triangle star pattern:
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *                                            */
                                          
#include<stdio.h>

void main()
{
    int row, col, n, space, odd_count=1;

    //Asking the user how many rows of the pattern he/she wants to print
    printf("Enter the no. of rows upto the first half of the required diamond: ");
    scanf("%d", &n);

    //First half of the pattern
    for (row=1; row<=n; row++)
    {   
        printf("\n");

        //For Spaces
        for (space=n-1; space>=row; space--)
            printf("  ");

        //For Stars
        for (col=1; col<=odd_count; col++)
            printf("* ");

        odd_count += 2;
    }

    //Second half of the pattern
    for (row=1; row<n; row++)
    {
        printf("\n");

        //For Spaces
        for (space=1; space<=row; space++)
            printf("  ");

        //For Stars
        for (col=1; col<=(odd_count-4); col++)
            printf("* ");

        odd_count -= 2;
    }
}