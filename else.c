#include<stdio.h>

int main()

{
    int n=8, sum, k, count;

    float average;

    printf("BSc computer science 1st year 1st sem\n: 1:sco 110 mathematical foundationof cs\n 2. ucu 100 communication skills\n 3.sco 100 fundamentals of computing\n 4.sco 102 introduction to programming\n 5.sco 108 discrete maths\n 6.sco 110 mathematical foundation for computer science\n 7.sco 104 computer organisation and architecture\n 8.sco 106 electronics\n ");

    printf("enter marks\n");

    for (count=1; count<n; count++);

    {
        printf("k=");

        scanf("%d", &k);

        sum+=k;

        
            average=sum/n;

            printf("average=%.3f\n",average);

            if (average>=50)
            
            {

                printf("pass\n");

            }

            else

            {
                
               printf("fail\n"); 
            }
            
        return 0;

    }


}