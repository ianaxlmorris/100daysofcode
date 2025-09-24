/* IAN AXL MORRIS
Write a program to input two numbers and display their sum, difference, product, and quotient */

#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter two numbers one by one :");
    scanf("%d",&a);
    scanf("%d",&b);
    int s=a+b;
    int d=a-b;
    int m=a*b;
    int di=a/b;
    printf("SUM = %d\n", s);
    printf("Difference = %d\n",d);
    printf("Product = %d\n",m);
    printf("Quotient = %d\n",di);
}
