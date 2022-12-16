//Question:2 (Week-2)

#include<stdio.h>

void main()
{
    int n, t1, t2, next, count;

    printf("Enter the required first n terms of Fibonacci Sequence:\n");
    scanf("%d", &n);

    t1 = 0;
    t2 = 1;
    
    printf("First %d terms of Fibonacci Sequence:\n", n);
    printf("%d \t %d", t1, t2);

    count = 2;

    L1: if (count < n)
    {
        next = t1 + t2;
        printf("\t %d", next);

        count += 1;

        t1 = t2;
        t2 = next;  

        goto L1;
    }
}