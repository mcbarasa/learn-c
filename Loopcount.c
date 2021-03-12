#include<stdio.h>

int main()

{
    int n, count, loops, loopcount;

    float x, sum, avg;

    printf("how many lists?\n");

    scanf("%d",&loops);

    for (loopcount=1; loopcount<=loops; loopcount++)

    {
        sum = 0;

        printf("list numbers %d/n how many numbers?\n",  loopcount);

        scanf("%d", &n);

    }

    for (count=1; count<=n; count++)

    printf("x=");

    scanf("%f", &x);

    sum += x;

    {
        avg = sum/n;

        printf("\n the average is %f\n",avg);

    }

    return 0;
}