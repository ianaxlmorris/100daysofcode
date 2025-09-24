/* Ian Axl Morris  
Write a program to check if a number is an Armstrong number. */

#include <stdio.h>
#include <math.h>

int main() {
    int n1, o, r, result = 0,c= 0;
    printf("Enter an integer: ");
    scanf("%d", &n1);
    o=n1;
    while (o!=0) {
        o/= 10;
        c++;
    }
    o= n1;
    while (o!=0) {
        r= o%10;
        result += pow(r,n1);
        o/=10;
    }
    if (result == n1) {
        printf("%d is an Armstrong number.\n", n1);
    } else {
        printf("%d is not an Armstrong number.\n",n1);
    }

}
