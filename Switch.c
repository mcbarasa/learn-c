#include<stdio.h>

int main()

{
    int count, x[5];

    for (count = 0 ; count <5 ; count ++)

    {
        printf("enter integer %d:", count +1 );

        scanf("%d", &x[count]);


    }

    
        printf("integers entered\n");

        for (count = 0 ; count < 5 ; count ++)

    

    {
        printf("%d\n", x[count]);

    }

    return 0;
    
}
