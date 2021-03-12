#include<stdio.h>

int main()

{
    
    int i=0;

    //declaration of array

    int marks[5];

    //intialization of array

    marks[0]=80;

    marks[1]=60;

    marks[2]=70;

    marks[3]=85;

    marks[4]=75;

    //traversal of array

    for (i=0; i<5; i++){

        printf("%d\n", marks[i]);

    }

    return 0;
    
}