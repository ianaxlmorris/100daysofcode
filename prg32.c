/* Ian Axl Morris 
Write a program to check if a number is a palindrome.*/

#include <stdio.h>
int main()
{
    int r=0,n;
    int a=n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0)
    {
        int d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    if (a==r)
    printf("The number is a palindrome.");
    
}