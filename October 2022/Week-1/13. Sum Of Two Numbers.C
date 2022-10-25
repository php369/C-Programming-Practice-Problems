//Question:13 (Week-2)
//Write a c program to find the sum of two numbers and then display its output.

#include<stdio.h>
#include<conio.h>

void main()
{
	float a, b, c;
	clrscr();

	printf("Enter the values of two numbers as a, b: \n");
	scanf("%f %f", &a, &b);

	c = a + b;

	printf("Sum = %f", c);
}