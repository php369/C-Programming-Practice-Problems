/*Write a c program to perform arithmetic operations like +, -, *, or /. Use the concept of switch case and 
  the function without parameter passing to implement the same. */

#include<stdio.h>

void calculate();

void main()
{
    calculate();
}

void calculate()
{   
    float operand1, operand2, result;
	char operator;

	printf("Enter the two integer operands:\n");
	scanf("%f %f", &operand1, &operand2);

	printf("\nEnter the operator (+, -, *, /) to be performed between the two operands entered above:\n");
	scanf("%s", &operator);
    
    int x = (operator == '+') ? (1) : ((operator == '-') ? (2) : ((operator == '*') ? (3) : (4)));

    switch(x)
    {
        case 1: result = operand1 + operand2; break;
        case 2: result = operand1 - operand2; break;
        case 3: result = operand1 * operand2; break;
        case 4: result = operand1 / operand2; break;
    }

    printf("Result = %f", result);
}