//Question Link: https://www.codechef.com/problems/NETFLIX

#include <stdio.h>

int main() 
{
	int t, i, a, b, c, x;
	
	scanf("%d", &t);
	
	if (t>=1 && t<=1000)
	{
	    for (i=0; i<t; i++)
	    {
	        scanf("%d %d %d %d", &a, &b, &c, &x);
	        
	        if (a>=1 && a<=100 && b>=1 && b<=100 && c>=1 && c<=100 && x>=1 && x<=100)
	        {
	            if ((a+b>=x) || (b+c>=x) || (a+c>=x))
	                printf("YES\n");
	            else
	                printf("NO\n");
	        }
	    }
	}
	
	return 0;
}