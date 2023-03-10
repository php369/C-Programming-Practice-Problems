//Question Link: https://www.codechef.com/problems/LUCKYFR
//Program to count number of '4's in T integers

#include<stdio.h>

int main()
{
    int t, x, count, a, rem;

    //Reading t
    scanf("%d", &t);

    for (x=0; x<t; x++)
    {
        count = 0;
        
        //Reading each integer
        scanf("%d", &a);

        while (a>0)
        {
            rem = a % 10;
            if (rem == 4)
                count++;
            a = a / 10;
        }

        printf("%d\n", count);
    }
    
    return 0;
}