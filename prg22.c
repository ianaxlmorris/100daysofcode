/* IAN AXL MORRIS
Write a program to find profit or loss percentage given cost price and selling price. */

#include <stdio.h>
int main() 
{
    float cp,sp;
    float profitLossAmount;
    float percentage;
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);
    profitLossAmount =sp - cp;
    if (profitLossAmount > 0) 
    {
        percentage = (profitLossAmount /cp) * 100;
        printf("Profit: %.2f\n", profitLossAmount);
        printf("Profit Percentage: %.2f %lf\n", percentage);
    } 
    else if (profitLossAmount < 0) 
    {
        percentage = (-profitLossAmount /cp) * 100; 
        printf("Loss: %.2f\n", -profitLossAmount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } 
    else 
        printf("No profit, no loss.\n");
}