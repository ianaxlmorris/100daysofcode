/* IAN AXL MORRIS
Write a program to find and display the sum of the first n natural numbers. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a no. :");
    scanf("%d",&a);
    int s=0;
    for(int i=1;i<=a;i++)
    s=s+i;
    printf("The sum of all natural numbers till %d is %d.",a,s);
}