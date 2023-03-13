//Question Link: https://www.codechef.com/problems/NEARESTEXIT
//Program to determine the nearest exit by the passenger

#include<stdio.h>

int main()
{
    int t, i, x;

    //Reading testcases
    scanf("%d", &t);

    if (t>=1 && t<=100)
    {
        for (i=0; i<t; i++)
        {
            //Reading seat number
            scanf("%d", &x);

            if (x>=1 && x<=100)
            {
                if (x > 50)
                    printf("RIGHT\n");
                else
                    printf("LEFT\n");
            }
        }
    }

    return 0;
}