//Question:10 (Week-2)

#include<stdio.h>

void main()
{
    int x=5, y=6;

    y = ++x + y;

    printf("x = %d", x);
    printf("\ny = %d", y);
}

//Expected Output: x=6; y=12