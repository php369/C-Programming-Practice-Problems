/*#include<stdio.h>

unsigned long long factorial(int n)
{
    int i;
    unsigned long long fact = 1;

    for (i=1; i<=n; i++)
        fact *= i;

    return fact;
}

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n<0)
        printf("Factorial is not found for negative integers.\n");
    else{
        unsigned long long result = factorial(n);
        printf("Factorial of %d is %llu", n, result);
    }

    return 0;
}*/

#include <stdio.h>

unsigned long long factorial(unsigned int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    
    // Recursive case: calculate factorial using recursion
    return n * factorial(n - 1);
}

int main() {
    unsigned int num;
    
    printf("Enter a non-negative integer: ");
    scanf("%u", &num);
    
    unsigned long long fact = factorial(num);
    
    printf("Factorial of %u is %llu\n", num, fact);
    
    return 0;
}
