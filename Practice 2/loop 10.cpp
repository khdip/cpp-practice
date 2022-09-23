#include<stdio.h>
int main()
{
    int i,j,n=1;
    for (i=0;i<=4;i++)
    {
        for (j=0;j<=1;j++)
        {
            printf("%d ",n++);
        }
        printf("\n");
    }
    return 0;
}
