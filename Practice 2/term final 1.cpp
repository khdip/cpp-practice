#include<stdio.h>
int main()
{
    int num,digit1,digit2,digit3,digit4;
    int a,b,c;
    printf("Enter a four digit number: ");
    scanf("%d",&num);
    digit4=num%10;
    a=num/10;
    digit3=a%10;
    b=a/10;
    digit2=b%10;
    c=b/10;
    digit1=c%10;
    printf("Sum of the digits= %d",digit1+digit2+digit3+digit4);
    return 0;

}
