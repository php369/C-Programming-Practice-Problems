//Question:9 (Week-3)
/*Program to print the following triangle star pattern:
        *
      * *
    * * *
  * * * *
* * * * *                                */
                                          
#include<stdio.h>

void main()
{
    int n, row, col, space;

    printf("\nEnter n value:");
    scanf("%d", &n);

    row = 0;
    while (row < n)
    {
        printf("\n");

        space = n;
        while (space > row)
        {
            printf("  ");
            space--;
        }
        
        col = 0;
        while (col <= row)
        {
            printf("* ");
            col++;
        }
        row++;
    }
}