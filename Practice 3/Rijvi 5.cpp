#include<stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter 1st Number: ");
    scanf("%d",&num1);
    printf("Enter 2nd Number: ");
    scanf("%d",&num2);
    printf("Enter 3rd Number: ");
    scanf("%d",&num3);
    if (num1>num2 && num1>num3)
        printf("\n %d is the greatest number \n",num1);
    else if (num2>num1 && num2>num3)
        printf("\n %d is the greatest number \n",num2);
    else if (num3>num1 && num3>num2)
        printf("\n %d is the greatest number \n",num3);
    else
        printf("\n Choose different numbers please \n");
    return 0;
}
