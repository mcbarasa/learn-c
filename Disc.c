#include<stdio.h>

int main()

{

    //declare sale_amount and amount

    int sale_amount, amount;

    float discount, total;

    printf("enter sale_amount values\n");

    scanf("%d", &sale_amount);

    //ten percent disc

    if (sale_amount>=10000){

         discount=sale_amount*0.10;

         printf("discount=ksh.%f\n", discount);

         total=sale_amount-discount;

         printf("total=ksh.%f\n", total);

    }
    //seven percent

    else if (sale_amount>=5000 && amount<10000){

        discount=sale_amount*0.07;

        printf("the discount=ksh.%f\n", discount);

        total=sale_amount-discount;

        printf("total=ksh.%f\n", total);

    }

    else if (sale_amount>=3000 && sale_amount<5000){

        discount=sale_amount*0.05;  //five percent

        printf("discount=ksh.%f\n", discount);

        total=sale_amount-discount;

        printf("total=ksh.%f\n", total);

    }

    else {

        printf("discount=ksh0\n");

        total=sale_amount-discount;

        printf("total=ksh.%f\n", total);
    }

    return 0;

}