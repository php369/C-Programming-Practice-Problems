/*Porgram to collect a single student information such as name, age, and roll number using structures.
  Decalre a pointer variable and read and print the information of the student structure using pointers. */

//Program using Stating Memory Allocation (SMA)

#include<stdio.h>

struct student
{
  char name[20];
  int age;
  int roll_number;
};

int main()
{
  struct student s, *ptr;
  ptr = &s;

  //Reading structure memebrs 
  printf("Enter name: ");
  scanf("%s", ptr->name); //or (*ptr).name

  printf("Enter age: ");
  scanf("%d", &(*ptr).age); //or &ptr->age

  printf("Enter roll number: ");
  scanf("%d", &ptr->roll_number); //or &(*ptr).roll_number

  //Printing the student information
  printf("Name = %s \nAge = %d \nRoll Number = %d", ptr->name, ptr->age, ptr->roll_number);

  return 0;
}