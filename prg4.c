/* IAN AXL MORRIS
Write a program to calculate the area and circumference of a circle given its radius. */

#include <stdio.h>
int main()
{
    int r;
    printf("Enter the radius :");
    scanf("%d",&r);
    int a=((22/7)*r*r);
    int c=(2*(22/7)*r);
    printf("Area : %d",r);
    printf("Circumference : %d",c);
    return 0;
}