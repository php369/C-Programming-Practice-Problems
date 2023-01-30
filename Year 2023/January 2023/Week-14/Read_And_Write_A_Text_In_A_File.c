//Program-1 (Week-14)
//Program to read a few lines of text from keyboard and then write it in a file file1.txt

#include<stdio.h>

void main()
{
    char c;
    FILE *fp;

    fp = fopen("S:\\Programming Practice\\Daily C Programming Practice\\CSE Week Programs\\file1.txt", "w");

    do
    {
        c = getchar();
        putc(c, fp);
    } while (c != EOF);

    fclose(fp);
}