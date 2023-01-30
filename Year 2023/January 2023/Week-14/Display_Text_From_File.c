//Program-2 (Week-14)
//Program to display text from a file file1.txt

#include<stdio.h>

void main()
{
    char c;
    FILE *fp;

    fp = fopen("S:\\Programming Practice\\Daily C Programming Practice\\CSE Week Programs\\file1.txt", "r");

    do
    {
        c = getc(fp);
        putchar(c);
    } while (c != EOF);

    fclose(fp);
}