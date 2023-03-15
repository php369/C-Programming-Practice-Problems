//Self Referential Structure with multiple link (Double linked list)

#include<stdio.h>

struct node
{
    int data_1;
    int data_2;
    struct node *link1, *link2;
};

int main()
{
    struct node ob1, ob2, ob3;

    //Static Initialisation of Structure Members of ob1
    ob1.link1 = NULL;  //Previous
    ob1.data_1 = 10;
    ob1.data_2 = 20;
    ob1.link2 = &ob2;  //Next

    //Static Initialisation of Structure Members of ob2
    ob2.link1 = &ob1;  //Previous
    ob2.data_1 = 30;
    ob2.data_2 = 40;
    ob2.link2 = &ob3;  //Next

    //Static Initialisation of Structure Members of ob3
    ob3.link1 = &ob2;  //Previous
    ob3.data_1 = 50;
    ob3.data_2 = 60;
    ob3.link2 = NULL;  //Next

    //Accessing the data members of ob1, ob2, ob3 using ob1
    printf("%d\t%d\t%d\t%d\t%d\t%d", ob1.data_1, ob1.data_2, ob1.link2->data_1, ob1.link2->data_2, ob1.link2->link2->data_1, ob1.link2->link2->data_2);

    return 0;
}