#include<stdio.h>
int main ()
{

    int i;
    {
        for (i=1;i<=9;i++)
        {
            if (i<=3)
            {
                printf("%d",i);
            }
            printf("\n");

            if (i>3 && i<=6)
            {
                printf("%d",i);
            }
            printf("\n");

            if (i>6 && i<=9)
                printf("%d",i);
        }
    }
    return 0;
}
