/* IAN AXL MORRIS
Write a program to calculate simple and compound interest for given principal, rate, and time.
*/

#include <stdio.h>
int main()
{
    double p,r,t;
    printf("Enter the principle , rate and time with spaces :");
    scanf("%lf %lf %lf", &p, &r, &t);
    double i= (double)((p*r*t)/100);
    printf("The interest is :  %.2lf",i);
    return 0;
}