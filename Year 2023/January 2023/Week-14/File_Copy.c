//Program-4 (Week-14)
//Program to copy a file

#include<stdio.h>

void main()
{
    char c;
    FILE *fp1, *fp2;

    //File that will have text (If not present, manually create)
    fp1 = fopen("S:\\Programming Practice\\Daily C Programming Practice\\CSE Week Programs\\file2.txt", "r"); 
    
    //File that will be created containg the text copied from above file
    fp2 = fopen("S:\\Programming Practice\\Daily C Programming Practice\\CSE Week Programs\\file3.txt", "w"); 

    do
    {
        c = getc(fp1);
        putc(c, fp2);
    } while (c != EOF);

    fclose(fp1);
    fclose(fp2);
}