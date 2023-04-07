//Question Link: https://www.codechef.com/problems/PPSUM

#include <stdio.h>

int main() 
{
	int t, i, j, d, n, sum;
	
	scanf("%d", &t);
	
	if (t>=1 && t<=16)
	{
	    for (i=0; i<t; i++)
	    {
	        scanf("%d %d", &d, &n);
	        
	        if (d>=1 && d<=4 && n>=1 && n<=4)
	        {
	            for (j=0; j<d; j++)
	            {
	                sum = (n*(n+1))/2;
	                n=sum;
	            }
	            printf("%d\n", n);
	        }
	    }
	}
	
	return 0;
}