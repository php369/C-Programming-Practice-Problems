//Question:17 (Week-2)
//Write a program to find the area of a triangle.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float a, b, c, S, A;
	clrscr();

	printf("Enter the sides of the triangle as a, b, c: \n");
	scanf("%f %f %f", &a, &b, &c);

	S = (a + b + c) / 2;
	A = sqrt(S * (S - a) * (S - b) * (S - c));

	printf("The area of the triangle is %f", A);
}