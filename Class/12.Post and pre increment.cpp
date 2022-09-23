#include<stdio.h>
int main()
{
    int x,y,w,z;
    x=10;
    y=x++;
    printf("x=%d y=%d\n",x,y);
    z=10;
    w=++z;
    printf("z=%d w=%d",z,w);
    return 0;
}
