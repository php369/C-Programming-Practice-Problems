//Program-3 (Week-10)
//Program to compare two strings

#include<stdio.h>

int string_compare(char str1[100], char str2[100]);

void main()
{
    char str1[100], str2[100];

    printf("Enter String 1: ");
    scanf("%s", &str1);

    printf("Enter String 2: ");
    scanf("%s", &str2);

    if (string_compare(str1, str2))
        printf("\nStrings are equal");
    else    
        printf("\nStrings are not equal");
}

int string_compare(char str1[100], char str2[100])
{
    int i;

    for (i=0; ((str1[i] - str2[i] == 0) && (str1[i] != '\0') && (str2[i] != '\0')); i++);

    if ((str1[i] == str2[i]) && (str2[i] == '\0'))
        return 1;
    else  
        return 0;
}