//Problem-1 (Week-10)
//Program to concatenate two strings

#include<stdio.h>

void string_concatenation(char str1[100], char str2[100]);

void main()
{
    char str1[100], str2[100];
    
    printf("Enter string 1: ");
    scanf("%s", &str1);

    printf("Enter string 2: ");
    scanf("%s", &str2);

    string_concatenation(str1, str2);

    printf("\nConcatenated string: %s", str1);
}

void string_concatenation(char str1[100], char str2[100])
{
    int i, j;

    for (i=0; str1[i] != '\0'; i++);

    for (j=0; (str1[i] = str2[j]) != '\0'; i++, j++);
}