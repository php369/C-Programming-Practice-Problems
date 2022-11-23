//Question:5 (Week-3)
/*Program to print the following triangle star pattern:
    *    
   * *    
  *   *   
 *     *  
*********                                */
                                          
#include<stdio.h>

void main()
{
    int row, col, n;

    //Asking the user how many rows of the pattern he/she wants to print
    printf("Enter the no. of rows of the pattern you want to print: ");
    scanf("%d", &n);

    for (row=0; row<n; row++)
    {
        printf("\n");

        //For th first half of the pyramid
        for (col=0; col<n; col++)
        {
            if (((row + col) == (n - 1)) || (row == (n - 1)))
                printf("*");
            else
                printf(" ");
        }
        
        //To move the cursor back for the second half of the pyramid
        printf("\b");

        //For the second half of the pyramid
        for (col=0; col<n; col++)
        {  
            if ((row == col) || (row == (n - 1)))
                printf("*");
            else
                printf(" ");
        }
    }
}