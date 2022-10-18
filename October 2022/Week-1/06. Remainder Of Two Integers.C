//Question:6 (Week-1)
//Write a c program to find the remainder of the given two integer values
//and then display its output.

#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int b;
	int c;

	a = 3;
	b = 2;
	c = a % b;

	clrscr();
	printf("Remainder = %d", c);
}