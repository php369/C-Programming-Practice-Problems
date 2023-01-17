//Question:11 (Week-1)
//Write a c program to find whether the given number is a two digit number or not.

#include<stdio.h>

void main()
{
	int a;
	
	a = 29;

	if(a>=10 && a<=99)
	{
		printf("Two digit number.");
	}
	else
	{
		printf("Not a two digit number.");
	}
}