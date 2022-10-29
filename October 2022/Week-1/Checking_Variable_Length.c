//Question:23 (Week-1)
//Program to check whether the variable name is correct or not.

#include<stdio.h>

void main()
{
    int x111111111111111111111111111111yz; //name contains 30 '1's
    int x11111111111111111111111111111111111abc; //name contains 35 '1's

    int qwertyuiopasdfghjklzxcvbnm12345; //name contains 31 characters
    int QWERTYUIOPASDFGHJKLZXCVBNM_67890; //name contains 32 characters

    int qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM_1234567890; //name contains 63 characters

    x111111111111111111111111111111yz = 10;
    x11111111111111111111111111111111111abc = 20;

    qwertyuiopasdfghjklzxcvbnm12345 = 30; 
    QWERTYUIOPASDFGHJKLZXCVBNM_67890 = 40; 

    qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM_1234567890 = 50; 


    printf("%d", x111111111111111111111111111111yz);
    printf("\n%d", x11111111111111111111111111111111111abc);
    printf("\n%d", qwertyuiopasdfghjklzxcvbnm12345);
    printf("\n%d", QWERTYUIOPASDFGHJKLZXCVBNM_67890);
    printf("\n%d", qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM_1234567890);

}