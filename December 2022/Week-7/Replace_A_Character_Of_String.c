//Problem-3 (Week-7)
//Program to replace a character of string either from beginning or ending or at a specified location.

#include<stdio.h>

void replace_string_char(char str1[100], char, int);

void main()
{
    char str1[100], string;
    int pos;

    printf("Enter any string: ");
    scanf("%s", &str1);

    printf("Element to replace: ");
    scanf("%s", &string);

    printf("Position to replace the element: ");
    scanf("%d", &pos);

    replace_string_char(str1, string, pos);

    printf("\nReplaced string: %s", &str1);
}

void replace_string_char(char str1[100], char string, int pos)
{
    int i;

    for (i=0; i != pos-1; i++);

    str1[i] = string;
}