//Question:18 (Week-1)
/*Write a c program that takes two integer operands and one operator
from the user, performs the operation and then prints the result.*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1, num2;
	float result;
	char Operator;
	clrscr();

	printf("Enter the two integer operands: \n");
	scanf("%d %d", &num1, &num2);

	printf("\n Enter the operator to be performed between the two operands entered above: \n");
	scanf("%c", &Operator);

	if (Operator == '+')
	{
		result = num1 + num2;
		printf("The result is %f", result);
	}
	else if (Operator == '-')
	{
		result = num1 - num2;
		printf("The result is %f", result);
	}
	else if (Operator == '*')
	{
		result = num1 * num2;
		printf("The result is %f", result);
	}
	else if (Operator == '/')
	{
		result = num1 / num2;
		printf("The result is %f", result);
	}
}
