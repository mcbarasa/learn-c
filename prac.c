#include<stdio.h>

#define mass 3.0*10^-23

int main()

{
    //enter n to rep the amount of water 

    int molecules, n, grams;

    printf("enter n values\n");

    scanf("%d", &n);

    //calculate no of molecules

    grams=n*950;

    molecules = grams /mass*4;

    //outtput results

    printf("molecules=%d", molecules);

    return 0;
}