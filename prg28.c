/* Ian Axl Morris 
Write a program to print the product of even numbers from 1 to n. */

#include <stdio.h>
int main()
{
    int n,p;
    scanf("Enter a number : %d",&n);
    for(int i=2;i<=n;i+=2)
    p=p*i;
    printf("The product of even numbers from 1 to %d is %d",n,p);
}