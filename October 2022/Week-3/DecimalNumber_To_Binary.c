//Question:2 (Week-3)

#include<stdio.h>
#include<math.h>

void main()
{
    float d=0, floatPart=0, float_b=0;
    int int_b=0, intPart=0, i=0, j, rem=0;

    //Taking any decimal number
    printf("\nEnter any positive decimal number:\n");
    scanf("%f", &d);

    //Separating the decimal number into integer part and floating part
    intPart = (int)d;
    floatPart = d - intPart;

    //Calculating Binary value for integer part
    L1: if (intPart > 0)
    {
        rem = intPart % 2;
        int_b += rem * pow(10, i);
        intPart /= 2;
        i++;

        goto L1;
    }

    //Calculating Binary value for floating part
    j = 0;
    do
    {
        floatPart *= 2;
        j = j+1;
    }
    while(floatPart < 1.0);
    
    float_b = 1.0*pow(10,-j);
    
    //Displaying the converted Binary number from the given decimal number by adding the individual binary parts
    printf("\nBinary conversion: %lf", (double)int_b + (double)float_b);
}