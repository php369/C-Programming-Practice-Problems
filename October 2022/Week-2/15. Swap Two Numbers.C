//Question:15 (Week-2)
//Write a c program to swap two variable numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b;
	clrscr();
	printf("Enter the a,b values:\n");
	scanf("%d %d", &a, &b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("Swapped vslues of a,b: %d %d", a,b);
}