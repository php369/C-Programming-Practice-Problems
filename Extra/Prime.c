/*#include <stdio.h>
#include<math.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0; // Not a prime number
    }
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // Not a prime number
        }
    }
    
    return 1; // Prime number
}

int main() {
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    
    return 0;
}*/

#include <stdio.h>

int isPrimeRecursive(int n, int divisor) {
    // Base cases: if n is 0, 1, or a negative number, it's not prime
    if (n <= 1) {
        return 0;
    }

    // Base case: if divisor reaches n, it's prime
    if (divisor == n) {
        return 1;
    }

    // Recursive case: check if n is divisible by any number from 2 to n-1
    if (n % divisor == 0) {
        return 0;
    }

    // Recursively check the next divisor
    return isPrimeRecursive(n, divisor + 1);
}

int isPrime(int n) {
    // Special case: 2 is a prime number
    if (n == 2) {
        return 1;
    }

    // Call the recursive function with divisor starting from 2
    return isPrimeRecursive(n, 2);
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}
