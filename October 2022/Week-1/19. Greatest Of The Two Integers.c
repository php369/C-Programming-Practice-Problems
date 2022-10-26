//Question:19 (Week-1)
//Write a c program to find the greatest of the given two integers.

#include<stdio.h>

void main()
{
	int a, b;
	
	printf("Enter a, b values:\n");
	scanf("%d %d", &a, &b);
	
	if (a>b)
	{
		printf("Greatest of the given two integers is %d", a);
	}
	else if (b>a)
	{
		printf("Greatest of the given two integers is %d", b);
	} 
	else
	{
		printf("Both the numbers are equal.");
	}	 
}
