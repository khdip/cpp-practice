#include <stdio.h>

int main()
{
    int A[7][7];
    int value =1;
    int input, flag =0;
    for (int i=0; i<6; i++)
        for (int j=0; j<7; j++)
    {
        A[i][j] = value;
        value++;
    }
    scanf("%d", &input);

    int y;
    for (int i=0; i<6; i++)
        for (int j=0; j<7; j++)
    {
        if (A[i][j]==input)
        {
            printf("Row : %d\nColumn : %d\n",j+1,i+1);
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Value Not found!");
    }

    return 0;
}

