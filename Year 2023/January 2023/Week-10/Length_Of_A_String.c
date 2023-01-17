//Problem-4 (Week-10)
//Program to find the leangth of a string

#include<stdio.h>

int string_length(char str[100]);

void main()
{
    char str[100];
    int l;

    printf("Enter any string: ");
    scanf("%s", &str);

    l = string_length(str);

    printf("\nLength of the given string = %d", l);
}

int string_length(char str[100])
{
    int i;

    for (i=0; str[i] != '\0'; i++);

    return i;
}