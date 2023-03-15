//Self Referential Structure with single link

#include<stdio.h>

struct node
{
    int data_1;
    int data_2;
    struct node *link;  //link is a structure pointer which stores the address of the node strucutre; capable of storing address of another structure of same node type
};

int main()
{
    struct node ob1, ob2;

    //Static Initialisation of Structure Members of ob1
    ob1.data_1 = 10;
    ob1.data_2 = 20;
    ob1.link = NULL; //Pointer can either store an address or NULL

    //Static Initialisation of Structure Members of ob2
    ob2.data_1 = 30;
    ob2.data_2 = 40;
    ob2.link = NULL;

    //Linking ob1 & ob2
    ob1.link = &ob2; //Link field of ob1 is reserved for storing an address of another structure

    //Accessing the data members of ob2 using ob1
    printf("%d \t %d", ob1.link->data_1, ob1.link->data_2);

    return 0;
}