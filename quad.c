#include<stdio.h>

int main()

{
   int a,b,c,x1,x2;

   printf("enter a,b,c values\n");

   scanf("%d%d%d", &a, &b, &c);

    x1=((-b+(b*b-(4*a*c))^1/2)/(2*a));

    x2=((-b-(b*b-(4*a*c))^1/2)/(2*a));

    printf("%d\n%d\n ",x1, x2);

    return 0;
}
