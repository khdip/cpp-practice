#include<stdio.h>
int main()
{
    int A[5][5];
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d %d",i,j);
        }
        printf("\n");
    }
    return 0;
}
