//Question Link: https://projecteuler.net/problem=4
/*
Question:
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include<stdio.h>
#include<string.h>

void main()
{
    int num1, num2, product=1, length, i, palindrome, largest_palindrome_product, current;
    char string_product[6];

    for (num1=100; num1<=999; num1++)
    {
        for (num2=100; num2<=999; num2++)
        {
            product = num1 * num2;

            if (product > largest_palindrome_product)
            {
                sprintf(string_product, "%d", product);

                length = strlen(string_product);

                palindrome = 0;

                for (i=0; i<length; i++)
                {
                    if (string_product[i] != string_product[length-i-1])
                    {
                        palindrome = 1;
                        break;
                    }
                }
            
                if (palindrome==0)
                    largest_palindrome_product = product;
            }
            
        }
    }

    printf("Largest Palindrome Product of two three digits numbers = %d", largest_palindrome_product);
}