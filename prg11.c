/* IAN AXL MORRIS
Write a program to input an integer and check whether it is even or odd using if–else.
 */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a%2==0)
    printf("Even no.");
    else
    printf("Odd number.");
}