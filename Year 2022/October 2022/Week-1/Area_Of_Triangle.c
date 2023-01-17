//Question:17 (Week-1)
//Write a program to find the area of a triangle.

#include<stdio.h>
#include<math.h>

void main()
{
	float a, b, c, S, A;

	printf("Enter the sides of the triangle as a, b, c: \n");
	scanf("%f %f %f", &a, &b, &c);

	S = (a + b + c) / 2;
	A = sqrt(S * (S - a) * (S - b) * (S - c));

	printf("\nThe area of the triangle is %f sq. units.", A);
}