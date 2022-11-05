//Question:13 (Week-2)

#include<stdio.h>

void main()
{
    int num1, num2;

    printf("Enter any two numbers:\n");
    scanf("%d %d", &num1, &num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("Swapped Numbers: %d, %d", num1, num2);
}