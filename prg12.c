/* IAN AXL MORRIS
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number.");
    scanf("%d",&a);
    if(a>0)
    printf("Positive.");
    else if(a==0)
    printf("Number is zero.");
    else
    printf("Negative.");
}