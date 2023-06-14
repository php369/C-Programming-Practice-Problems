/*
Program to print the following pattern:

1
0 1
1 0 1
0 1 0 1   */

#include<stdio.h>

void main()
{
    int n, i, j, flag;

    //Reading the size of pattern
    printf("Enter the size of pattern: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        if (i%2==0)
            flag = 1;
        else
            flag = 0;
        
        for (j=0; j<=i; j++)
        {
            printf("%d ", flag);

            if (flag == 0)
                flag = 1;
            else
                flag = 0;
        }

        printf("\n");
    }
}