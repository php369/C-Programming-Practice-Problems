#include <stdio.h>

int main() 
{
    int num = 5;
    int *ptr;

    ptr = &num;

    printf("Address of num: %p\n", &num);
    printf("Value stored in ptr: %p\n", ptr);
    printf("Value of num: %d\n", num);
    printf("Value at address stored in ptr: %d\n", *ptr);

    return 0;
}