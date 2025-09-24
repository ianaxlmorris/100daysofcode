/* Ian Axl Morris 
Write a program to implement a basic calculator using switch-case for +, -, *, /, %. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter 1 for addition, 2 for Difference, 3 for Mutiplication, 4 for quotient, and 5 for remainder");
    scanf("%d",&a);
    printf("Enter two numbers :");
    int b,c;
    scanf("%d %d",&b,&c);
    switch (a)
    {
    case 1:
        int s=b+c;
        printf("Sum : %d",s);
        break;
    case 2:
        int d=b-c;
        printf("Difference : %d",d);
        break;
    case 3:
        int m=b*c;
        printf("Product : %d",m);
        break;
    case 4:
        int q=b/c;
        printf("Quotient : %d",q);
        break;
    case 5:
        int r=b%c;
        printf("Remainder : %d",r);
        break;
    default:
        printf("Wrong input.");
        break;
    }
}