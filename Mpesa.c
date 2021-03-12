#include<stdio.h>

int main()

{

    printf("\n\n\t\t  Sim Toolkit\n");

    int n;

    printf(" Enter n value\n");

    printf(" 1:Safaricom+\n 2:Mpesa services\n");

    scanf("%d", &n);

    if (n==1){
        printf(" Safaricom+\n");
        {
            int s;
            printf(" Enter s value\n");
            printf(" 1:M-Banking Serivices\n 2:MY Account\n");
            scanf("%d", &s);
            if (s==1){
                printf(" M-Banking Serivices\n");
            }
            else if (s==2){
                printf(" MY Account\n\n");

            }
        }
    } 
    else if (n==2){
        printf(" Mpesa services\n");
                        {
                    int e;
                    printf(" Enter e value\n");
                    printf(" 1:Send Money\n 2:Withdraw\n 3:Buy Airtime\n 4:Loans and Savings\n 5:Lipa na M-pesa\n 6:My Account\n");
                    scanf("%d", &e);
                    if (e==1){
                        printf("Send Money\n");
                        {
                            int i;
                            printf(" Enter i value\n");
                            printf(" 1:Search SIM Contacts\n 2:Enter phone no\n\n");
                            scanf("%d", &i);
                            if (i==1){
                                printf("Search SIM Contacts\n");
                                {
                                    int name;
                                    printf(" Enter name\n");
                                    scanf("%d", &name);
                                }
                            }
                            else if (i==2){
                                printf("Enter phone no\n\n");
                                {
                                int no;
                                printf(" Enter no\n");
                                scanf("%d", &no);
                                }
                                {
                                    int amt;
                                    printf(" enter amt\n");
                                    scanf("%d", &amt);
                                }
                                {
                                    int pin;
                                    printf(" Enter pin\n");
                                    scanf("%d", &pin);
                                    if (pin==1234){
                                        printf(" Successful wait for Safaricom to Reply\n");
                                    }
                                    else if (pin){
                                        printf(" Invalid\n");
                                        return 0;
                                    } 
                                }
                                
                            }
                        }
                    }
                    else if (e==2){
                        printf("Withdraw\n");
                        {
                            int p;
                            printf(" Enter p value\n");
                            printf(" 1:From Agent\n 2:From ATM\n");
                            scanf("%d", &p);
                            if (p==1){
                                printf("From Agent\n");
                                {
                                    int t;
                                    printf(" Enter t\n");
                                    printf(" Enter Agent no\n");
                                    scanf("%d", &t);
                                }
                                {
                                    int q;
                                    printf(" Enter q\n");
                                    printf(" Enter Amount\n");
                                    scanf("%d", &q);
                                }
                                {
                                    int pin;
                                    printf(" Enter pin\n");
                                    scanf("%d", &pin);
                                    if (pin==1234){
                                        printf(" Successful wait for Safaricom to Reply\n");
                                    }
                                    else if (pin){
                                        printf(" Invalid\n");
                                        return 0;
                                    }
                                }
                            }
                            else if (p==2){
                                printf("From ATM\n");
                            }

                        }
                    }
                    else if (e==3){
                        printf("Buy Airtime\n");
                        {
                            int b;
                            printf(" Enter b value\n");
                            printf(" 1:My Phone\n 2:Other Phone\n");
                            scanf("%d", &b);
                            if (b==1){
                                printf(" My Phone\n");
                                {
                                    int amt;
                                    printf(" enter amt\n");
                                    printf(" Enter Amount\n");
                                    scanf("%d", &amt);
                                }
                            }
                            else if (b==2){
                                printf(" Other Phone\n");
                                {
                                    int no;
                                    printf(" Enter no\n");
                                    printf(" 1:Search SIM Contacts\n 2:Enter Phone no.\n");
                                    scanf("%d", &no);
                                }
                            }
                        }
                    }
                    else if (e==4){
                        printf("Loans and Savings\n");
                        {
                            int m;
                            printf(" Enter m value\n");
                            printf(" 1:Mshwari\n 2:KCB Mpesa\n");
                            scanf("%d", &m);
                            if (m==1){
                                printf(" Mshwari\n");
                                {
                                    int x;
                                    printf(" Enter x\n");
                                    printf(" 1:Send to M-Shwari\n 2:Withdraw from M-Shwari\n 3:Lock Savings Account\n 4:Loan\n 5:Check Balance\n 6:Mini Statement\n");
                                    scanf("%d", &x);
                                    if (x==1){
                                        printf(" Send to M-Shwari\n");
                                    }
                                    else if (x==2){
                                        printf(" Withdraw from M-Shwari\n ");
                                    }
                                    else if (x==3){
                                        printf(" Lock Savings Account\n");
                                    }
                                    else if (x==4){
                                        printf(" Loan\n");
                                    }
                                    else if (x==5){
                                        printf(" Check Balance\n");
                                    }
                                    else if (x==6){
                                        printf(" Mini Statement\n");
                                    }
                                }
                            }
                            else if (m==2){
                                printf(" KCB Mpesa\n");
                                {
                                    int k;
                                    printf(" Enter k\n");
                                    printf(" 1:Deposit rrom M-pesa\n 2:Withdraw to M-pesa\n 3:Buy Airtime\n 4:Loan\n 5:Fixed Savings Accounts\n 6:My Account\n");
                                    scanf("%d", &k);
                                    if (k==1){
                                        printf(" Deposit rrom M-pesa\n");
                                    }
                                    else if (k==2){
                                        printf(" Withdraw to M-pesa\n");
                                    }
                                    else if (k==3){
                                        printf(" Buy Airtime\n");
                                    }
                                    else if (k==4){
                                        printf(" Loan\n ");
                                    }
                                    else if (k==5){
                                        printf(" Fixed Savings Accounts\n");
                                    }
                                    else if (k==6){
                                        printf(" My Account\n");
                                    }
                                }
                            }
                        }
                    }
                    else if (e==5){
                        printf("Lipa na M-pesa\n");
                        {
                            int l;
                            printf(" Enter l Value\n");
                            printf(" 1:Pay Bill\n 2:Buy Goods and Services\n");
                            scanf("%d", &l);
                            if (l==1){
                                printf(" Pay Bill\n");
                            }
                            else if (l==2){
                                printf(" Buy Goods and Services\n");
                            }
                        }
                    }
                    else if (e==6){
                        printf("My Account\n");
                        {
                            int a;
                            printf(" Enter a value\n");
                            printf(" 1:Safaricom\n 2:Mini Statement\n 3:Check Balance\n 4:Change PIN\n 5:Change Language\n 6:Update Customer Menu\n");
                            scanf("%d", &a);
                            if (a==1){
                                printf(" Safaricom\n");
                            }
                            else if (a==2){
                                printf(" Mini Statement\n");
                            }
                            else if (a==3){
                                printf(" Check Balance\n");
                            }
                            else if (a==4){
                                printf(" Change PIN\n");
                            }
                            else if (a==5){
                                printf(" Change Language\n");
                            }
                            else if (a==6){
                                printf(" Update Customer Menu\n");
                            }
                        }
                    }
                }
    }
    return 0;
}