//Question:10 (Week-1)
//Write the c program to find whether the given integer is an even number or
//odd number. If it is even, then display "Even", otherwise display "Odd".

#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	a = 4;

	if(a % 2 == 0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}