//Question:3 (Week-3)
//Program to check whether the given number is Armstrong number or not.

#include<stdio.h>
#include<math.h>

void main()
{
    //Declaring variables
    int n, n_copy, digits=0, sum, d;

    //Reading the number
    printf("Enter any positive number:\n");
    scanf("%d", &n);

    //Storing n value in a temporary variable
    n_copy = n; 

    while (n > 0)
    {
        n /= 10;
        digits++;
    }

    sum = 0;
    
    //Restoring n value from its copy
    n = n_copy;

    while (n > 0)
    {
        d = n % 10;
        sum += pow(d, digits);
        n /= 10;
    }

    if (sum == n_copy)
        printf("%d is an Armstrong Number.", n_copy);
    else
        printf("%d is not an Armstrong Number.", n_copy);
}