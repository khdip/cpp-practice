#include<stdio.h>

int main ()
{
    int base,height;
    float area;
    printf("Base of the triangle: ");
    scanf("%d",&base);
    printf("Height of the triangle: ");
    scanf("%d",&height);
    area=0.5*base*height;
    printf("Area of the triangle= %.2f",area);
    return 0;
}
