#include<stdio.h>

int main()
{
    //declare x,a,b,c

    int x1, x2, a, b, c;

    //input a,b,c

    printf("enter a,b,c values\n");

    scanf("%d%d%d", &a, &b, &c);

    //calculate x1,x2

    x1 = (-b + (b*b - 4*a*c) / 2*a);

    x2 = (-b - (b*b - 4*a*c) / 2*a);

    //output results

    printf("x = %d or %d", x1, x2);

    return 0;
}
