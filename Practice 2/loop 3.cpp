#include<stdio.h>
int main ()
{
    int num;
    for (;;)
    {
        scanf("%d",&num);
        if (num==0)
            break;
        printf("%d",num);
    }
    return 0;
}
