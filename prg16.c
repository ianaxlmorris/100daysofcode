/* IAN AXL MORRIS
Write a program to input three numbers and find the largest among them using if–else. */

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers. ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&& a>c)
    printf("%d is the largest number. ",a);
    else if(b>a && b>c)
    printf("%d is the largest number. ",b);
    else if(c>a && c>b)
    printf("%d is the largest. ",c);
    else
    printf("Two or more numbers are the same.");
}