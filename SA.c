#include<stdio.h>

#define PI 3.142

int main()

{
    //declare sa, r, h

    int sa, r, h, d;

    //input values of r,h

    printf("enter r, h, d values\n");

    scanf("%d%d%d",&r, &h, &d);

    //calculate sa

    sa=((PI*r*r)+(PI*d*h));

    //output result

    printf("sa=%d\n", sa);

    return 0;
}


