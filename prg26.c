/* Ian Axl Morris 
Write a program to print numbers from 1 to n. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    printf("%d \n",i);
}