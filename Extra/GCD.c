/*#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main() {
    int num1, num2;
    
    printf("Enter two positive integers:\n");
    scanf("%d %d", &num1, &num2);
    
    if (num1 <= 0 || num2 <= 0) {
        printf("Error: Invalid input. Both numbers must be positive.\n");
    } else {
        int result = gcd(num1, num2);
        printf("GCD of %d and %d is %d\n", num1, num2, result);
    }
    
    return 0;
}*/

#include <stdio.h>

int gcd(int a, int b) {
    // Base case: if either number is 0, return the other number as the GCD
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    
    // Recursive case: calculate the GCD using the Euclidean algorithm
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int result = gcd(num1, num2);
    
    printf("The GCD of %d and %d is %d\n", num1, num2, result);
    
    return 0;
}