//Program-3 (Week-14)
//Program to append a few lines of text to a file file1.txt

#include<stdio.h>

void main()
{
    char c;
    FILE *fp;

    fp = fopen("S:\\Programming Practice\\Daily C Programming Practice\\CSE Week Programs\\file1.txt", "a");

    do
    {
        c = getchar();
        putc(c, fp);
    } while (c != EOF);

    fclose(fp);
}