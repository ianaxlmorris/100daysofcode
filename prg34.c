/* Ian Axl Morris 
Write a program to check if a number is prime. */

#include <stdio.h>
int main()
{
    int n,c;
    printf("Enter a number. ");
    scanf("%d",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    printf("Is a prime number.");
    else
    printf("Is not a prime number.");
}
