#include<stdio.h>

int main()

{

    int x1,x2,x3,sum;

    float avg;

    printf("enter x1,x2,x3 values\n");

    scanf("%d%d%d", &x1, &x2, &x3);


    sum = (x1+x2+x3);

    avg = (sum/3);

    printf(" %.3f\n", avg);


    if (avg>=80){

        printf(" A\n");
        printf(" Distinction\n");

    }

    else if (avg>=70 && avg<80){

        printf("B\n");

        printf("pass\n");

    }

    else if (avg>=50 && avg<70){

        printf("C\n");

        printf("average\n");

    }

    else if (avg>= 40 && avg<50){

        printf("D\n");

        printf("trial\n");

        

    }

    else  {

        printf("E\n");

        printf("fail\n");
    }

    return 0;

}