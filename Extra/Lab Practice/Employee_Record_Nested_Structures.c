/*Program to read an employee record & then display the record on output window. An employee record should contain
  id, name, salary, and DOB. */

#include<stdio.h>

struct employee
{
    int eid;
    char ename[32];
    float esal;
    struct DOB
    {
        int dd;
        int mm;
        int yyyy;
    }dob;
};

void main()
{
    struct employee e;

    printf("Enter Employee ID, Name, Salary, DOB:\n");
    scanf("%d %s %f %d %d %d", &e.eid, e.ename, &e.esal, &e.dob.dd, &e.dob.mm, &e.dob.yyyy);

    printf("EID = %d \nEName = %s \nESalary = %.0f \nEDOB = %d/%d/%d", e.eid, e.ename, e.esal, e.dob.dd, e.dob.mm, e.dob.yyyy);
}