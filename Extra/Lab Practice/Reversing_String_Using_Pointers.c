#include <stdio.h>
#include <string.h>

void reverse(char *str) 
{
  int length = strlen(str);
  char *start = str;
  char *end = str + length - 1;
  while (start < end) 
  {
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

int main() {
  char str[] = "Hello, World!";
  printf("Original string: %s\n", str);
  reverse(str);
  printf("Reversed string: %s\n", str);
  return 0;
}