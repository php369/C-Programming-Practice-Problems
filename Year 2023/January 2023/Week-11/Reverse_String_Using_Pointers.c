//Program-4 (Week-11)
//Program to reverse a string using pointers

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100], *sp_start, *sp_end, temp;
    int i, j;

    printf("Enter a string: ");
    gets(str);
    
    sp_start = str;
    sp_end = str + strlen(str) + 1;

    for (i=0, j=strlen(str); i<j; i++, j--)
    {
        temp = sp_start;
        sp_start = sp_end;
        sp_end = temp;
    }

    printf("\nReversed string: %s", str);
}