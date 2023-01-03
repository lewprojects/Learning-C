//5.3 Program to determine if a nubmer is even or odd
//5.4 Same as 5.3, but with an else-statement instead of 2 if-statements

#include <stdio.h>

int main (void)
{
    int number_to_test, remainder;

    printf("Enter your number to be tested: ");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if(remainder == 0)
        printf("The number is even. \n");
    else
        printf("The number is odd.\n");

    return 0;
}