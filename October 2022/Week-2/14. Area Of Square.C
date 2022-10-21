//Question:14 (Week-2)
//Write a c program to find the area of the square.

#include<stdio.h>
#include<conio.h>

void main()
{
	float s, A;
	clrscr();

	printf("Enter the side of the square: \n");
	scanf("%f", &s);

	A = s * s;

	printf("Area of the square: %f", A);
}