//Program-4 (Week-11)
//Program to reverse a string using pointers

#include<stdio.h>

void str_rev(char *sp[100], int, int);

void main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);
    
    str_rev(&str, 0, strlen(str)-1);

    printf("\nReversed string: %s", str);
}

void str_rev(char str[100], int i, int j)
{
    int 
    for (i=0, j=0; i<j; i++, j--)
    {

    } 
}