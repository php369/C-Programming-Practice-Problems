/*#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n <= 0) {
        return 0; // Base case: Fibonacci of 0 is 0
    } else if (n == 1) {
        return 1; // Base case: Fibonacci of 1 is 1
    }
    
    unsigned long long prev = 0;
    unsigned long long curr = 1;
    
    for (int i = 2; i <= n; i++) {
        unsigned long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    
    return curr;
}

int main() {
    int n;
    
    printf("Enter the position of the Fibonacci sequence: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Error: Invalid position.\n");
    } else {
        unsigned long long result = fibonacci(n);
        printf("Fibonacci at position %d is %llu\n", n, result);
    }
    
    return 0;
}*/

#include <stdio.h>

int fibonacci(int n) {
    // Base cases: Fibonacci of 0 is 0 and Fibonacci of 1 is 1
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    // Recursive case: Fibonacci of n is the sum of Fibonacci of n-1 and Fibonacci of n-2
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num);
    
    printf("Fibonacci series up to %d terms:\n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}