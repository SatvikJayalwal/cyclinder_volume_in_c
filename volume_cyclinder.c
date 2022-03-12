#include<stdio.h>
int main()
{
    float pi,r,h,v;
    pi=3.14;
    printf("\nThis program calculates the volume of cyclinder\n");
    printf("Enter the radius of cyclinder : ");
    scanf("%f",&r);
    printf("Enter the height of cyclinder : ");
    scanf("%f",&h);
    v=pi*r*r*h;
    printf("\nThe volume of cyclinder is %f",v);
    return 0;

}