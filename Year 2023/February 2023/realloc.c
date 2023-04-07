#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n, i;

    int *ptr = (int *)realloc(ptr, 4*sizeof(int));

    printf("Enter array size: ");
    scanf("%d", &n);
    
    if (ptr == NULL)
    {
        printf("Memory not available!");
        exit(1);
    }

    for (i=0; i<n; i++)
    {
        printf("Enter int %d: ", i+1);
        scanf("%d", ptr + i);
    }

    for (i=0; i<n; i++)
        printf("%d ", *(ptr + i));
}