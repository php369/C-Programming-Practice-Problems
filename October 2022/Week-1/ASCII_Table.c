//Question: 24 (Week-1)
//Write a c program to print ASCII Table.

#include<stdio.h>

void main()
{
    int decimal, total;

    decimal = 32;
    total = 126;

    L1: if (decimal <= total)
    {
        printf("\n%d \t %c", decimal, decimal);
        
        if (decimal == 32)
        {
            printf("\t Whitespace");
        }
        else if ((decimal > 32 && decimal <=47) || (decimal >= 58 && decimal <= 64) || (decimal >= 91 && decimal <= 96) || (decimal >= 123 && decimal <= 126))
        {
            printf("\t Special Character");
        }
        else if (decimal >= 48 && decimal <= 57)
        {
            printf("\t Numerical");
        }
        else if (decimal >= 65 && decimal <= 90)
        {
            printf("\t Upper Case Letters");
        }
        else
        {
            printf("\t Lower Case Letters");
        }

        decimal += 1;
        goto L1;
    }
}