/* 
Ian Axl Morris
Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
 */

#include <stdio.h>
int main()
{
    int a,l;
    printf("Enter the number of days late.");
    scanf("%d",&a);
    if(a>=1 && a<=5)
    l=a*2;
    else if(a>=6 && a<=10)
    l=a*4;
    else if (a>=11 && a<=30)
    l=a*6;
    else
    {
    printf("Membership cancelled.");
    }
    printf("The fine you have to pay is : %d",l);
}
