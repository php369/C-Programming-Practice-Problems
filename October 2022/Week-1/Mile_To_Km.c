//Question:12 (Week-1)
//Write a c program to convert miles to km and then display its output.

#include<stdio.h>
#define km_per_mile 1.609

void main()
{
	float mile, km;
	
	printf("Enter miles: \n");
	scanf("%f", &mile);

	km = mile * km_per_mile;

	printf("\nMiles in km = %f km", km);
}