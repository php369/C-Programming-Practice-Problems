//Question Link: https://www.codechef.com/problems/FIT

#include <stdio.h>

int main() 
{
	int t, i, x;
	
	scanf("%d", &t);
	
	if (t>=1 && t<=10)
	{
	    for (i=0; i<t; i++)
	    {
	        scanf("%d", &x);
	        
	        if (x>=1 && x<=10)
	            printf("%d\n", 2*x*5);
	    }
	}
	
	return 0;
}