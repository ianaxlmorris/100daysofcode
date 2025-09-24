/* IAN AXL MORRIS
Write a program to input time in seconds and convert it to hours:minutes:seconds format. */

#include <stdio.h>
int main()
{
    int a,h,m,s;
    printf("Enter the time in seconds \n");
    scanf("%d",&a);
    h=a/3600;
    m=(a%3600)/60;
    s=(a%3600)%60;
    printf("The time in H:M:S format is %d:%d:%d",h,m,s);
}