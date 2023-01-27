//Program-2 (Week-12)
//Program to perform linear search using pointers

#include<stdio.h>

int isExist(int *, int, int);
void readArray(int *, int);

void main()
{
    int a[100], n, i, s;

    printf("Enter n: ");
    scanf("%d", &n);

    readArray(a, n);

    printf("\nEnter s: ");
    scanf("%d", &s);

    if ((i = isExist(a, n, s)) != -1)
        printf("\n%d exist at %d", a[i], i);
    else
        printf("\nDoes not exist");
}

void readArray(int *p, int n)
{
    int i;

    for (i=0; i<n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", p+2);
    }
}

int isExist(int *p, int n, int s)
{
    int i;
    for (i=0; i<n; i++)
    {
        if (*p == s)
            break;
        
        p++;
    }

    if (i == n)
        return (-1);
    else
        return i;
}