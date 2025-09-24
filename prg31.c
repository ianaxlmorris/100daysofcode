/* Ian Axl Morris 
Write a program to take a number as input and print its equivalent binary representation. */

#include <stdio.h>

int main() {
    int n, b = 0, p = 1;
    printf("Enter a number.");
    scanf("%d", &n);
    while (n > 0) {
        b += (n % 2) * p; //to reverse and make the binary - ian
        n /= 2;
        p *= 10;
    }
    printf("%d", b);
    return 0;
}
