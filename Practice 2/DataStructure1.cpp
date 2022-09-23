#include <stdio.h>

int main()
{
    int A[7][7];
    int value =1;
    for (int i=0; i<6; i++)
        for (int j=0; j<7; j++)
    {
        A[i][j] = value;
        value++;
    }


    int y;
    for (int i=0; i<6; i++)
        for (int j=0; j<7; j++)
    {
        y = 2*A[i][j];
        printf("%d\n",y);
    }

    return 0;
}
