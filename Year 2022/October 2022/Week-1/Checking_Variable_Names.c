//Question:22 (Week-1)
//Program to check whether the variable name is correct or not.

#include<stdio.h>

void main()
{
    int x, _x, 1_x;
    x = 0;
    _x = 2;
    1_x = 3;

    printf("%d", 1_x);
}

//Output-> Error: invalid suffix "_x" on integer constant. (1_x)