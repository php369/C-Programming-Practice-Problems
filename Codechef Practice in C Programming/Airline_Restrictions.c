//Question Link: https://www.codechef.com/problems/AIRLINE

#include <stdio.h>

int main() 
{
	int t, i, a, b, c, d, e;
	
	scanf("%d", &t);
	
	if (t>=1 && t<=36000)
	{
	    for (i=0; i<t; i++)
	    {
	        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	        
	        if (a>=1 && a<=10 && b>=1 && b<=10 && c>=1 && c<=10 && d>=15 && d<=20 && e>=5 && e<=10)
	        {
	            if ((a+b<=d && c<=e) || (b+c<=d && a<=e) || (a+c<=d && b<=e))
	                printf("YES\n");
	            else
	                printf("NO\n");
	        }
	    }
	}
	
	return 0;
}