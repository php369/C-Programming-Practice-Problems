//Question Link: https://www.codechef.com/problems/REACHTARGET

#include <stdio.h>

int main() 
{
    int t, i, x, y;
    scanf("%d", &t);
    
    if (t>=1 && t<=10)
    {
        for (i=0; i<t; i++)
        {
            scanf("%d %d", &x, &y);
            
            if (x>y && x<=200 && y>=50 && y<x)
                printf("%d\n", x-y);
        }
    }
    
	return 0;
}