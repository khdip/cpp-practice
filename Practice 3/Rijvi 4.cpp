#include<stdio.h>

int main ()
{
    int r;
    float area;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    printf("\n");
    area=3.1416*r*r;
    printf("Area of the circle = %.4f\n",area);
    return 0;
}
