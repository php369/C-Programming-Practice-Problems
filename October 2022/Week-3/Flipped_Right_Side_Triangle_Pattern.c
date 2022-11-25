//Question:11 (Week-3)
/*Program to print the following triangle star pattern:
* * * * *
  * * * *
    * * *
      * *
        *                         */
                                          
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

    space = 0;
    while (space < row)
    {
      printf("  ");
      space++;
    }
        
    col = n;
    while (col > row)
    {
      printf("* ");
      col--;
    }
    row++;
  }
}