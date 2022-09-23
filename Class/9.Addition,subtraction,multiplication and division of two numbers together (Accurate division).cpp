#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul;
    float div;
    a=15;
    b=30;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=(float)a/(float)b;
    printf("sum=%d sub=%d mul=%d div=%5.2f",sum,sub,mul,div);
    return 0;
}
