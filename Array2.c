#include<stdio.h>

int main()

{

    //2d array declaration

    int disp[2][3];
    
    //counter variables for the loop 

    int i, j;

    for (i=0; i<2; i++){

        for (j=0; j<3; j++){

            printf("enter value of disp[%d][%d]\n:",i , j);

            scanf("%d", &disp[i][j]);

        }

    }

    //displaying array elements

    printf("two dimmensional array elements\n");

    for (i=0; i<2; i++){

        for (j=0; j<3; j++){

            printf("%d", disp[i][j]);

            if (j==2){

                printf("\n");
            }
        }
    }

    return 0;

}