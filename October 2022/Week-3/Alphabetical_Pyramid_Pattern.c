//Question:18 (Week-3)
/*Write a c program to print the following star pattern:
          a
        b c d
      e f g h i
    j k l m n o p
  q r s t u v w x y            */

#include<stdio.h>

void main()
{
    int row, col, n=5, space, odd_count=1, count=97;

    printf("\n");

    for (row=1; row<=n; row++)
    {
        //For Spaces
        for (space=n-1; space>=row; space--)
            printf("  ");

        //For Stars
        for (col=1; col<=odd_count; col++)
        {
            printf("%c ", count);
            count++;
        }

        printf("\n");

        odd_count += 2;
    }
}