#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d",&a);
    if (a<0)
        printf("A negative number");
    else
        printf("A positive number");
    return 0;
}
