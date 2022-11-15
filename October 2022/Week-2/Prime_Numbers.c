//Question:3 (Week-2)

#include<stdio.h>

void main()
{
    int n, i, num, prime;

    printf("Enter the n value upto which you want all the prime numbers:\n");
    scanf("%d", &n);

    printf("Prime numbers upto %d are:\n", n);
    
    for (num=2; num<n; num++)
    {
        prime = 1;
        for (i=2; i<num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d \t", num);
    }
}