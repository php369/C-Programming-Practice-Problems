/*#include<stdio.h>
#include<string.h>

int isPalindrome(char *str)
{
    int i;
    int j = strlen(str)-1;

    while(i<j)
    {
        if (str[i]!=str[j])
            return 0;
        
        i++;
        j--;
    }

    return 1;
}

int main()
{
    char str[100];

    printf("Enter any string: ");
    gets(str);

    if(isPalindrome(str))
        printf("Is palindrome");
    else
        printf("Is not a palindrome");

    return 0;
}*/

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    // Base case: when start and end meet or cross each other
    if (start >= end) {
        return 1;
    }
    
    // Recursive case: check if characters at start and end are equal
    if (str[start] != str[end]) {
        return 0;
    }
    
    // Recursively check the remaining substring
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline character
    str[strcspn(str, "\n")] = '\0';
    
    int len = strlen(str);
    int palindrome = isPalindrome(str, 0, len - 1);
    
    if (palindrome) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
    
    return 0;
}
