//Program-4 (Week-13)
//Program to find a reverse of a given string using recursion.

#include<stdio.h>
#include<string.h>

void str_rev(char str[100], int, int);

void main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    str_rev(str, 0, strlen(str)-1);
    printf("\nReversed string: %s", str);
}

void str_rev(char str[100], int i, int j)
{
    char temp;

    if (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        str_rev(str, ++i, --j);
    }    
}