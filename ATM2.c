#include<stdio.h>

#define amount 20000

int main()

{

        int pin;

    printf("\t\t\n\n  Welcome to BRS Bank\n\n");

        printf("  enter pin value\n");

    scanf("%d", &pin);

    if (pin==1234){

        printf(" Next\n");

    }

     else if (pin){

        printf("  Invalid Pin Try Again 2 Chances Left\n");

        printf("  enter pin value\n");
        scanf("%d", &pin);
        
        
         if (pin){
        printf("  Invalid Pin Try Again 1 Chance Left\n");
        printf("  enter pin value\n");
        scanf("%d", &pin);
        }
        
         if (pin==1234){
             printf("  enter pin value\n");
             scanf("%d", &pin);

            printf("Next\n");
        }
        
        if (pin){
        printf(" BLOCKED\n");
        scanf("%d", &pin); 
        return 0;
        }
        }
    

        {
            int e;
            printf("  enter e value\n");
            printf(" 1:Withdraw cash\n 2:check Balance\n 3:Transfer Cash\n");
            scanf("%d", &e);
            if (e==1){
                printf("  Withdraw cash\n");

            {

            int n, amt;

           printf("  enter n value\n");

           printf(" 1:500\n 2:1000\n 3:2000\n 4:5000\n 5:10000\n 6:Enter Amount\n");

           scanf("%d", &n);

           if (n==1){
               printf("500\n");
           }
           else if (n==2){
               printf("1000\n");
           }
           else if (n==3){
               printf("2000\n");
           }
           else if (n==4){
               printf("5000\n");
           }
           else if (n==5){
               printf("10000\n");
           }
           else if (n==6){
               printf("  Enter Amount\n");
               {
                   int amt;
                   printf("  enter amt value\n");
                   scanf("%d", &amt);
                   if (400>=amt>=21000){
                    printf("Invalid\n");
                    
                   }

               }
           }
           

            }


        }
        }

        return 0;
}