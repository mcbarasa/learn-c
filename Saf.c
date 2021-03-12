#include<stdio.h>

int main()

{
    int n;

    printf("enter n value\n");

    printf(" 0:Deal Of The Day\n 1:Data Bundles (NO EXPIRY)\n 2:Calls & SMS (NO EXPIRY)\n 3:Data Bundles With EXPIRY\n 4:Join Postpay\n 5:Lipa mdogo Mdogo\n 6:YouTube\n 7:Balance\n 8:Bundle Management\n 98:MORE\n");

    scanf("%d", &n);

    if (n==0){

        printf("Deal Of Day\n");

        printf("500MB for Ksh50\n");

        {
            int y;

            printf("enter y value\n");

            printf(" 1:Accept\n 2:Decline\n");

            scanf("%d", &y);

            if (y==1){

                printf("Accept\n");

                printf("Kindly Wait As We Process YOur Request\n");

            }

            else if (y==2){

                printf("Decline\n");

                return 0;
            }
        }

    }

    else if (n==1){

        printf("Data Bundles (NO EXPIRY)\n");

    }

    else if (n==2){

        printf("Calls & SMS (NO EXPIRY)\n");

    }

    else if (n==3){

        printf("Data Bundles With NO EXPIRY\n");

    }

    else if (n==4){

        printf("Join Postpay\n");

    }

    else if (n==5){

        printf("Lipa Mdogo Mdogo\n");

    }

    else if (n==6){

        printf("YouTube\n");

    }

    else if (n==7){

        printf("Balance\n");

    }

    else if (n==8){

        printf("Data Management\n");

    }

    else if (n==98){

        printf("MORE\n");

    }

    return 0;

}