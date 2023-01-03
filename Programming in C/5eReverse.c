//Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
    int number, right_digit;
    _Bool neg = 0;

    printf("Enter your number. \n");
    scanf("%i", &number);

    if (number < 0)
    {
        number = number * -1;
        neg = 1;
    }

    do
    {
        right_digit = number % 10;
        printf ("%i", right_digit);
        number = number / 10;
    }
    while (number != 0);

    if (neg == 1)
        printf("-\n");
    else
        printf("\n");

    return 0;
}