#include<stdio.h>
#include<string.h>

int main()
{
    int x, y, z,G;
    printf(" enter x, y, z values\n");
    scanf("%d%d%d", &x, &y, &z);
    if (x>y && x>z){
        printf(" x\n");
        
    }
    else if (y>x && y>z){
        printf(" y\n");
    }
    else if (z>x && z>y){
        printf(" z\n");
    }
    {
        int x, y, z;
        printf(" enter  y, z values\n");
        scanf(" %d%d", &y, &z);
    if (y<x && y>z){
        printf(" y\n");
    }
    else if (z<x && z>y){
        printf(" z\n");
    }
    }
    
    return 0;
}