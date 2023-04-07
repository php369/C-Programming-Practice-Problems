//To find maximum sum sub array

#include<stdio.h>

int main()
{
    int arr[8] = {-2, -3, -4, -1, -2, 1, 5, -3}, sum, msum, i;
    sum = msum = 0;

    for (i=0; i<=7; i++)
    {
        if ((arr[i]) > (arr[i] + sum))
            sum = arr[i];
        else
            sum = arr[i] + sum;
        
        if (sum > msum)
            msum = sum;
    }

    printf("%d",msum);
    return 0;
}