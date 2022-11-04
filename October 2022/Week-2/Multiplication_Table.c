//Question:4 (Week-2)

#include<stdio.h>

void main()
{
    int n, upto, count, result;

    printf("Enter the required multiplication table:\n");
    scanf("%d", &n);

    printf("Enter the number upto which you want %d\'s multiplication table:\n", n);
    scanf("%d", &upto);

    count = 1;

    L1: if (count <= upto)
    {
        result = n * count;
        printf("\n%d \t * \t %d \t = \t %d", n, count, result);

        count += 1;
        goto L1;
    }
}