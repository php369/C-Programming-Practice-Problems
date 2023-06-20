/*#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len, i, j;
    char temp;

    len = strlen(str);

    for (i=0, j=len-1; i<j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}*/

#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    // Base case: when start and end meet or cross each other
    if (start >= end) {
        return;
    }
    
    // Swap characters at start and end positions
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Recursively reverse the remaining substring
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline character
    str[strcspn(str, "\n")] = '\0';
    
    int len = strlen(str);
    
    // Reverse the string recursively
    reverseString(str, 0, len - 1);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}