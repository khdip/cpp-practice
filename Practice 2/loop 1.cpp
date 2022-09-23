#include<stdio.h>
int main ()
{
    int i,sum;
    i=1;
    sum=0;
    loop:
        if (i<=10)
        {
            sum=sum+i*i;
            i++;
            goto loop;

        }
        printf("%d",sum);
        return 0;
}
