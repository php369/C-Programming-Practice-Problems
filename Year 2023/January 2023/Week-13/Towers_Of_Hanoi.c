//Program-9 (Week-13)
//Program to find the Towers of Hanoi

#include<stdio.h>

void TOH(int, char, char, char);

void main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    TOH(n, 'A', 'C', 'B');
}

void TOH(int n, char from, char to, char temp)
{
    if (n==1)
        printf("\nMove %d disk from %c to %c", n, from, to);
    else
    {
        TOH(n-1, 'A', 'B', 'C');

        printf("\nMove %d disk from %c to %c", n, from, to);

        TOH(n-1, 'B', 'C', 'A');
    }
}