//C program to read a line of text using getchar() & then display the line of text using putchar()

#include <stdio.h>

int main()
{
    char a[100];
    int i;

    printf("Enter a line of text:\n");

    i=0;

    do
    {
        a[i] = getchar();
        i++;
    } while (a[i-1] != '\n');

    a[i] = '\0';

    printf("\n");
    
    i=0;
    do
    {
        putchar(a[i]);
        i++;
    } while (a[i-1] != '\0');

	return 0;
}
