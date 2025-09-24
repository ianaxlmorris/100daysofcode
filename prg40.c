/* Ian Axl Morris
Write a program to find the 1’s complement of a binary number and print it.
*/

#include <stdio.h>
int main() {
    long long num, comp = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &num);
    while (num>0) 
    {
        int bit=num%10;
        bit=(bit==0)?1:0;
        comp=comp+bit*place;
        num/=10;  
        place=place*10; 
    }
    printf("1's Complement = %lld\n", comp);
}
