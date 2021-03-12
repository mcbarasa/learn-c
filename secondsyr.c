#include<stdio.h>

int main()

{
    int hours, n;

    float seconds;

    printf("enter n values\n");

    scanf("%d", &n);

    //calculate no of hours in a year

    hours=n*24;

    //output result

    printf("hours=%d\n", hours);

    //calculate number of seconds

    seconds=hours*3600;

    //output result

    printf("seconds=%.3f\n", seconds);

    return 0;

}