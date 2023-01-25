//Program-5 (Week-14)
//Program to count words, lines, and characters in a file

#include<stdio.h>

void main()
{
    char c;
    int line_count=0, word_count=0, char_count=0;
    FILE *fp;

    fp = fopen("S:\\Programming Practice\\Daily C Programming Practice\\CSE Week Programs\\file4.txt", "r");

    do
    {
        c = getc(fp);
        if (c == '\n')
        {
            line_count++;
            word_count++;
        }
        if (c == ' ')
            word_count++;
        
        char_count++;
    } while (c != EOF);

    //To count the last line and last word
    line_count++;
    word_count++;

    fclose(fp);

    printf("Word count: %d \nLine count: %d \nCharacter count: %d", word_count, line_count, char_count);
}