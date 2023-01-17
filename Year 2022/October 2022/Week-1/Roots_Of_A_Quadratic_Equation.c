//Question:15 (Week-1)
//Write a c program to find the roots of the given quadratic equation.

#include<stdio.h>
#include<math.h>

void main()
{
	float a, b, c, D, r1, r2, RP, IP;

	printf("Enter the coefficients of x^2, x, and the constant as a, b, c: \n");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a==0)
	{
		printf("Not a Quadratic Equation.");
	}
	else
	{
		D = (b * b) - (4 * a * c);

		if (D > 0)
		{
			r1 = (-b + sqrt(D)) / (2 * a);
			r2 = (-b - sqrt(D)) / (2 * a);

			printf("\nRoots are real.");
			printf("\nRoot 1 = %f and Root 2 = %f", r1, r2);
		}
		else if (D == 0)
		{
			r1 = r2 = -b / (2 * a);

			printf("\nRoots are real and equal.");
			printf("Root 1 = %f and Root 2 = %f", r1, r2);
		}
		else
		{
			RP = -b / (2 * a);
			IP = sqrt(-D) / (2 * a);

			printf("\nRoots are imaginary. Root 1 = %f + %fi and Root 2 = %f - %fi", RP, IP, RP, IP);
		}
	}
}