#include<stdio.h>

int main()
{
    //declare x,a,b,c

    int x,a,b,c;

    //input a,b,c

    printf("enter a,b,c values\n");

    scanf("%d%d%d",&a,&b,&c);

    //calculate x

    x=(-b+(b*b-4*a*c)/2*a);

    //output results

    printf("%d",x);

    return 0;
}
