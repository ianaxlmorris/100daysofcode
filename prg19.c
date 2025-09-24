/* IAN AXL MORRIS
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
 */

 #include <stdio.h>
int main()
{
    printf("Enter the sides of the triangle :");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c&&a==c)
    printf("Equilateral triangle.");
    else if (a!=b&&b!=c&&c!=a)
    printf("Scalene triangle.");
    else if (a==b || b==c || c==a)
    printf("Isoceles triangle.");
    return 0;
}