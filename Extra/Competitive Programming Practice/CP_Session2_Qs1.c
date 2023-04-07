//CP Session2 Qs1
/*
delete one character
aaaaa
aaaa
*/ 

#include<stdio.h>
#include<string.h>

void main()
{
    char a[10];
    int i=0, len;

    printf("Enter the length of your string: "); 
    scanf("%d", &len);

    printf("Enter the string: ");
    scanf("%s", a);

    while (i != len-1)
    {
        a[i] = 'a';
        a[i+1] = '\0';
        i++;
    }

    printf("%s", a);
}