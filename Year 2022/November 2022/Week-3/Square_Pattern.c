//Question:7 (Week-3)
/*Program to print the following triangle star pattern:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *                                */
                                          
#include<stdio.h>

void main()
{
    int n, row, col;

    printf("\nEnter n value:");
    scanf("%d", &n);

    row = 0;
    while (row < n)
    {
        printf("\n");
        
        col = 0;
        while (col < n)
        {
            printf("* ");
            col++;
        }
        row++;
    }
}