//Question:18 (Week-1)
/*Write a c program that takes two integer operands and one operator from the user, 
performs the operation and then prints the result.*/

#include<stdio.h>

void main()
{
	float operand1, operand2, result;
	char operator;

	printf("Enter the two integer operands:\n");
	scanf("%f %f", &operand1, &operand2);

	printf("\nEnter the operator (+, -, *, /) to be performed between the two operands entered above:\n");
	scanf("%s", &operator);

	if (operator == '+')
	{
		result = operand1 + operand2;
		printf("\nThe result is %f", result);
	}
	else if (operator == '-')
	{
		result = operand1 - operand2;
		printf("\nThe result is %f", result);
	}
	else if (operator == '*')
	{
		result = operand1 * operand2;
		printf("\nThe result is %f", result);
	}
	else if (operator == '/')
	{
		result = operand1 / operand2;
		printf("\nThe result is %f", result);
	}
	else
	{
		printf("\nEnter a operator from (+, -, *, /)");
	}
}