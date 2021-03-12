#include<stdio.h>

int main()

{

    int choice;

    printf("number of your choices\n");

    scanf("%d", &choice);

    //range of choice values

    if (choice>=1 && choice<9)

    //begin of switch

    switch (choice)
    {
    case 1:printf("you have typed one\n");break;

    case 2:printf("you have typed two\n");break;

    case 3:printf("you three have type\n");break;

    case 4:printf("you have typed four\n");break;

    default:printf("your choice is out of range");

    }

    return 0;
}