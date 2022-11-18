//Question:3 (Week-3)
//Program to check whether the given number is Armstrong number or not.

#include<stdio.h>
#include<math.h>

void main()
{
    //Declaring variables
    int n, n_copy, num_of_digits, sum, d;

    //Reading the number
    printf("Enter any positive number:\n");
    scanf("%d", &n);

    //Storing n value in a temporary variable
    n_copy = n; 

    num_of_digits = 0;

    while (n > 0)
    {
        n /= 10;
        num_of_digits++;
    }

    sum = 0;
    
    //Restoring n value from its copy
    n = n_copy;

    while (n > 0)
    {
        d = n % 10;
        sum += pow(d, num_of_digits);
        n /= 10;
    }

    if (sum == n_copy)
        printf("%d is an Armstrong Number.", n_copy);
    else
        printf("%d is not an Armstrong Number.", n_copy);
}