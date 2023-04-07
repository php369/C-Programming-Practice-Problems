#include<stdio.h>

void main()
{
    FILE *fp;
    char c;

    fp = fopen("S:\\Programming Practice\\Daily C Programming Practice\\CSE Week Programs\\file1.txt", "r");

    do
    {
        c = getc(fp);
        putchar()
    } while (c != EOF);
    
}