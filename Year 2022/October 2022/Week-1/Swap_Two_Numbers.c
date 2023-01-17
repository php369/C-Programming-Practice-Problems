//Question:15 (Week-1)
//Write a c program to swap two variable numbers without using a temporary variable.

#include<stdio.h>

void main()
{
	int num1, num2;
	
	printf("Enter the num1, num2 values:\n");
	scanf("%d %d", &num1, &num2);

	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("\nSwapped values of num1, num2: %d, %d", num1, num2);
}