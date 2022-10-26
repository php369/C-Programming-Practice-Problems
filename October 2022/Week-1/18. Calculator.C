//Question:18 (Week-1)
/*Write a c program that takes two integer operands and one operator
from the user, performs the operation and then prints the result.*/

#include<stdio.h>

int main()
{
	float num1, num2;
	float result;
	char Operator;

	printf("Enter the two integer operands:\n");
	scanf("%f %f", &num1, &num2);

	printf("\nEnter the operator to be performed between the two operands entered above:\n");
	scanf("%s", &Operator);

	if (Operator == '+')
	{
		result = num1 + num2;
		printf("\nThe result is %f", result);
	}
	else if (Operator == '-')
	{
		result = num1 - num2;
		printf("\nThe result is %f", result);
	}
	else if (Operator == '*')
	{
		result = num1 * num2;
		printf("\nThe result is %f", result);
	}
	else if (Operator == '/')
	{
		result = num1 / num2;
		printf("\nThe result is %f", result);
	}
	else
	{
		printf("\nEnter a operator from (+, -, *, /)");
	}
}
