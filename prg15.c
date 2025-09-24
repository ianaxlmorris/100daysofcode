/* IAN AXL MORRIS
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
*/

#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character.");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    printf("It is an uppercase alphabet.");
    else if(c>='a' && c<='z')
    printf("It is lowercase.");
    else if(c>=0 && c<=9)
    printf("It is a digit.");
    else
    printf("It is a special character.");
}