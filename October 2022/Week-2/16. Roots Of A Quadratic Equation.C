//Question:15 (Week-2)
//Write a c program to find the roots of the given quadratic equation.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float a, b, c, dis, r1, r2, RP, IP;
	clrscr();

	printf("Enter the values of the coefficients of x^2, x, and the constant as a, b, c: \n");
	scanf("%f %f %f", &a, &b, &c);

	dis = (b * b) - (4 * a * c);

	if (dis > 0)
	{
		r1 = (-b + sqrt(dis)) / (2 * a);
		r2 = (-b - sqrt(dis)) / (2 * a);

		printf("Root 1 = %f and Root 2 = %f", r1, r2);
	}

	else if (dis == 0)
	{
		r1 = r2 = -b / (2 * a);

		printf("Root 1 = Root 2 = %f", r1);
	}

	else
	{
		RP = -b / (2 * a);
		IP = sqrt(-dis) / (2 * a);

		printf("Root 1 = %f + %fi and Root 2 = %f - %fi", RP, IP, RP, IP);
	}
}