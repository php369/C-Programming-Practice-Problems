//Question Link: https://www.practicepython.org/exercise/2014/03/12/06-string-lists.html

/*
Question:
Ask the user for a string and print out whether this string is a palindrome or not.
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char s[100];
    int flag, i, strLength;

    printf("Enter any string:\n");
    scanf("%s", &s);
    
    flag = 0;

    strLength = strlen(s);

    for (i=0; i<strLength; i++)
    {
        if (s[i] != s[strLength-i-1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("The string is not a palindrome.");
    else
        printf("The string is a palindrome.");
}