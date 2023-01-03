//Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
    int number, right_digit;
    
    int sum = 0;

    printf("Enter your number: ");
    scanf("%i", &number);
    printf("\n");

    do
    {
        right_digit = number % 10;
        sum = right_digit + sum;
        number = number / 10;
    }
    while (number != 0);

    printf ("The sum of these numbers is %i\n", sum);
    return 0;
}