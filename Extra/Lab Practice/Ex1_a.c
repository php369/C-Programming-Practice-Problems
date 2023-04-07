#include <stdio.h>
#include <stdlib.h>

struct student 
{
    char name[30];
    int marks;
};

int main() 
{
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];
    for (i = 0; i < n; i++) 
    {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", s[i].name, &s[i].marks);
    }

    FILE *fp;
    fp = fopen("S:\\students.txt", "w");
    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        exit(1);
    }

    for (i = 0; i < n; i++) 
    {
        fprintf(fp, "Name: %s, Marks: %d\n", s[i].name, s[i].marks);
    }

    fclose(fp);
    printf("Data saved to file successfully.\n");

    return 0;
}