//Question:15 (Week-1)
//Write a c program to swap two variable numbers without using a temporary variable.

#include<stdio.h>

void main()
{
	int a, b;
	
	printf("Enter the a, b values:\n");
	scanf("%d %d", &a, &b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\nSwapped values of a, b: %d %d", a, b);
}