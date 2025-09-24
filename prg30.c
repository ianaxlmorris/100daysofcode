/* Ian Axl Morris 
Write a program to reverse a given number.
*/

#include <stdio.h>
int main()
{
    int r=0,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0)
    {
        int d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    printf("The reversed number is : %d ",r);
}