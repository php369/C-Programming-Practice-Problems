/*#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;

    if (exponent >= 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    } else {
        for (int i = 0; i > exponent; i--) {
            result /= base;
        }
    }

    return result;
}

int main() {
    double base;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);

    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}*/

#include <stdio.h>

double power(double base, int exponent) {
    // Base case: if exponent is 0, return 1
    if (exponent == 0) {
        return 1;
    }
    
    // Recursive case: calculate power using recursion
    if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        return (1 / base) * power(base, exponent + 1);
    }
}

int main() {
    double base;
    int exponent;
    
    printf("Enter the base: ");
    scanf("%lf", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    double result = power(base, exponent);
    
    printf("%.2lf ^ %d = %.2lf\n", base, exponent, result);
    
    return 0;
}