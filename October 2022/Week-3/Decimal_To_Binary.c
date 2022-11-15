//Question:1 (Week-3)

#include<stdio.h>
#include<math.h>

void main()
{
    int d, b=0, i=0, rem, d_copy;

    printf("Enter any positive integer:\n");
    scanf("%d", &d);

    d_copy = d; //Because d value is being lost in the iteration, hence is preserved in some other variable to print at the end

    L1: if (d > 0)
    {
        rem = d % 2;
        b += rem * pow(10, i);
        d /= 2;
        i++;

        goto L1;
    }

    printf("\nBinary conversion of %d = %d", d_copy, b);
}