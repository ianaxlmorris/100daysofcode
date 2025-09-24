/* Ian Axl Morris 
Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit */

#include <stdio.h>
int main()
{
    int a,e;
    printf("Enter the number of units consumed.");
    scanf("%d",&a);
    if(a>=1 && a<=100)
    e=a*5;
    else if(a>=101 && a<=200)
    e=a*7;
    else if(a>=201 && a<=300)
    e=a*10;
    else
    e=a*12;
    printf("The electricity bill is : %d",e);
}