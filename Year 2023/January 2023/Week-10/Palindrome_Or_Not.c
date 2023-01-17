//Problem-5 (Week-10)
//Program to find whether the given string is a palindrome or not.

#include<stdio.h>

int isPalindrome(char str1[100]);

void main()
{
    char str1[100];

    printf("Enter any string: ");
    scanf("%s", &str1);

    if (isPalindrome(str1))  
        printf("Given string is a Palindrome");
    else
        printf("Given string is not a Palindrome");
}

int isPalindrome(char str1[100])
{
    int i, j;

    for (j=0; str1[j] != '\0'; j++);

    for (i=0, j-=1; (str1[i] == str1[j] && i<j); i++, j--);

    if (i<j)
        return 0;
    else
        return 1;
}