//Question:14 (Week-1)
//Write a c program to find the area of the square.

#include<stdio.h>

int main()
{
	float s, A;

	printf("Enter the side of the square: \n");
	scanf("%f", &s);

	A = s * s;

	printf("\nArea of the square: %f sq. untis.", A);
	
	return 0;
}
