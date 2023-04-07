//Question Link: https://www.codechef.com/problems/COURSEREG

#include <stdio.h>

int main() 
{
	int t, i, n, m, k;
	
	scanf("%d", &t);
	
	if (t>=1 && t<=1000)
	{
	    for (i=0; i<t; i++)
	    {
	        scanf("%d %d %d", &n, &m, &k);
	        
	        if (n>=1 && n<=100 && m>=1 && m<=100 && k>=0 && k<=m)
	        {
	            if (n<=m-k)
	                printf("YES\n");
	            else
	                printf("NO\n");
	        }
	    }
	}
	
	return 0;
}