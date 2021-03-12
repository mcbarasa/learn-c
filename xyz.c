#include<stdio.h>
int main()
{
    int x, y, z, sum;
    float avg;
    printf(" Enter x,y,z value\n");
    scanf("%d%d%d", &x, &y, &z);
    sum=x+y+z;
    avg=sum/3;
    printf("avg=%.3f\n", avg);
    
    {
    int avg;
    printf(" Enter avg(0-100)\n");
    scanf("%d", &avg);
    switch (avg/10)
    {
      case 10:
      case 9: printf(" Grade: A\n");break;
      case 8: printf(" Grade: B\n");break;
      case 7: printf(" Grade: c\n");break;
      case 6: printf(" Grade: D\n");break;
      case 5: printf(" Grade: E\n");break;
      default:printf(" Grade: F\n");break;
    }
    }
    return 0;
}
