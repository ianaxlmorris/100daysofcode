/* Ian Axl Morris
Write a program to find the product of odd digits of a number. */

#include <stdio.h>
int main()
{
    int a,p=1;
    int k=a;
    printf("Enter a number : ");
    scanf("%d",&a);
    while(a!=0)
    {
        int d=a%10;
        if(d%2!=0)
        p=p*d;
    }
    printf("The product of odd digits of %d is %d",k,p);
}