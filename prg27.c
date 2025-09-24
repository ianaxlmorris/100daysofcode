/* Ian Axl Morris 
Write a program to print the sum of the first n odd numbers. */

#include <stdio.h>
int main()
{
    int n,s;
    scanf("Enter a number : %d",&n);
    for(int i=1;i<=n;i+=2)
    s=s+i;
    printf("The sum of odd numbers from 1 to %d is %d",n,s);
}