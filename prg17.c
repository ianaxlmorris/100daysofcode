/* IAN AXL MORRIS
Write a program to find the roots of a quadratic equation and categorize them. */

#include <stdio.h>
#include <math.h> 
int main() {
    double a, b, c; 
    double d, root1, root2;
    double realPart, imagPart;
    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = (b*b)-(4*a*c);
    if(d>0)
    {
        root1 =(-b +sqrt(d))/(2 * a);
        root2 = (-b - sqrt(d)) /(2 * a);
        printf("Roots are real and distinct.\n");
        printf("root1 = %lf and root2 = %lf\n", root1, root2);
    } else if (d == 0) {
        // Real and equal roots
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("root1 = root2 = %lf\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("Roots are complex and conjugate.\n");
        printf("root1 = %lf + %lfi and root2 = %lf - %lfi\n", realPart, imagPart, realPart, imagPart);
    }
}
