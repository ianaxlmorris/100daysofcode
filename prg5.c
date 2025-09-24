/* IAN AXL MORRIS
Write a program to convert temperature from Celsius to Fahrenheit. */

#include <stdio.h>
int main()
{
    double c=0;
    printf("Enter temperature in celsius :");
    scanf("%lf", &c);
    double f;
    f=(double)(c*(9.0/5.0))+32;
    printf("The temperature in fahrenheit is = %.2lf",f);
    return 0;
}