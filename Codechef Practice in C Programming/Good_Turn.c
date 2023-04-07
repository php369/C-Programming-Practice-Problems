//Question Link: https://www.codechef.com/problems/GDTURN#:~:text=They%20consider%20a%20turn%20to,whether%20the%20turn%20was%20good
//Program to find whether the turn was good

#include<stdio.h>

int main()
{
    int t, i, X, Y;

    scanf("%d", &t);

    if (t>=1 && t<=100)
        for (i=0; i<t; i++)
        {
            scanf("%d %d", &X, &Y);
            if (X>=1 && X<=6 && Y>=1 && Y<=6)
            {
                if (X+Y > 6)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
        }

    return 0;
}