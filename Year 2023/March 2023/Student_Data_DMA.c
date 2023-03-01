//Program to demonstrate dynamic memory allocation using structures.

#include<stdio.h>
#include<stdlib.h>

struct course
{
    char subject_name[30];
    int marks;
};

int main()
{
    struct course *ptr;
    int no_of_records, i;

    printf("Enter the number of records: ");
    scanf("%d", &no_of_records);

    //Memory Allocation for course structure
    ptr = (struct course *)malloc(no_of_records * sizeof(struct course));

    for (i=0; i<no_of_records; i++)
    {
        printf("Subject Name, Marks = ");
        scanf("%s %d", &(ptr+i)->subject_name, &(ptr+i)->marks);
    }

    for (i=0; i<no_of_records; i++)
        printf("Subject Name = %s \t Marks = %d \n", (ptr+i)->subject_name, (ptr+i)->marks);

    return 0;
}