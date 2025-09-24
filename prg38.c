/* Ian Axl Morris 
Write a program to find the sum of digits of a number. */

#include <stdio.h>
int main()
{
    int a,s;
    printf("Enter a number :");
    scanf("%d",a);
    while(a!=0)
    {
        int d=a%10;
        s=s+d;
        a/=10;
    }
    printf("Sum of digits = %d",s);
}