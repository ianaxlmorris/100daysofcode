/*IAN AXL MORRIS
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

#include <stdio.h>
int main()
{
    int l;
    int b;
    printf("Enter the length and breadth one by one :");
    scanf("%d",&l);
    scanf("%d",&b);
    int area=0;
    int perimeter=0;
    perimeter=(l+b)*2;
    area=l*b;
    printf("Area = %d",area);
    printf("\n Perimeter = %d", perimeter);
    return 0;
}