//Question Link: https://www.codechef.com/problems/TAXSAVING

#include <stdio.h>

int main() 
{
	int t, i, x, y;
	
	scanf("%d", &t);
	
	if (t>=1 && t<=100)
	{
	    for (i=0; i<t; i++)
	    {
	        scanf("%d %d", &x, &y);
	        
	        if (x>=1 && y>=1 && x<=100 && y<=100)
	        {
	            printf("%d\n", x-y);   
	        }
	    }
	}
	
	return 0;
}