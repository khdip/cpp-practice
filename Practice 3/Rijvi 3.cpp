#include<stdio.h>

int main()
{
    int a,b;
    float avg;
    printf("Enter the two numbers that you want to find average:\n");
    scanf("%d%d",&a,&b);
    avg=(a+b)*0.5;
    printf("Average = %.2f",avg);
    return 0;
}
