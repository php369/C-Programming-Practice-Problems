//Question:13 (Week-1)
//Write a c program to find the sum of two numbers and then display its output.

#include<stdio.h>

int main()
{
	float a, b, c;

	printf("Enter the values of two numbers as a, b: \n");
	scanf("%f %f", &a, &b);

	c = a + b;

	printf("\nSum = %f", c);
	
	return 0;
}
