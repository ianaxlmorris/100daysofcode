/* Ian Axl Morris 
Write a program to calculate the factorial of a number. */

#include <stdio.h>
int main()
{
    int a,f=1;
    printf("Enter a number :");
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
        f=f*i;
    }
    printf("Factorial of a number : %d",f);
    return 0;
}