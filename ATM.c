#include<stdio.h>

int main()

{

    int pin;

    printf("Welcome to BRS Bank\n");

        printf("enter pin value\n");

    scanf("%d", &pin);

    if (pin==7888){

        printf("Next\n");

    }

    else if (pin){

        printf("Invalid Pin Try Again\n");

              printf("enter pin value\n");

    scanf("%d", &pin); 
        

    }

    {

        int n;

        printf("enter n value\n");

        printf("1:Withdraw Cash\n 2:Check Balance\n 3:Transfer Cash\n");

        scanf("%d", &n);

        if (n==1){

            printf("Withdraw Cash\n");
        
            {
                int deposit, withdraw; 

                printf("enter withdraw value\n");

                scanf("%d", &withdraw);

           if (withdraw>=500 && withdraw<20000){

                printf("continue with transaction\n");

                int balance, deposit, withdraw;

            balance=deposit-withdraw;
           

            printf("%d\n", balance);

           }

            else if (withdraw<500 && withdraw>20000){

                printf("Invalid Choice\n");

                return 0;
            }

            
            }

    }

        else if (n==2){

            printf("Check Balance\n");
            
            int balance, deposit, withdraw;

            balance=deposit-withdraw;

            printf("%d\n", balance);

        }

        else if (n==3){

            printf("Transfer Cash\n");

        }

    } 

    {

        int r;

        printf("enter r value\n");

        printf("1:Cancel Transaction\n 2:Re do Transaction\n 3:Finish Transaction\n");

        scanf("%d", &r);

        if (r==1){

            printf("Cancel Transaction\n ");

            return 0;

        }

        else if (r==2){

            printf("Re do Transaction\n");

        }

        else if (r==3){

            printf("Finish Transaction\n");

                {
        int p;

        printf("Print receipt\n");

        printf("enter p value\n");

        printf("1:Yes\n 2:No\n");

        scanf("%d", &p);

        if (p==1){

            printf("Yes\n");

            {

                int balance, deposit, withdraw;

                balance=(deposit-withdraw);

                printf("%d\n", balance);

            }
                


        }

        else if (p==2){
            printf("No\n");
        }
    }
        }
    }



    printf("Thanks Welcome Again\n");

    return 0;
}