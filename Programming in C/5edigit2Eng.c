/*Program that takes an integer keyed in from the terminal and extracts and displays each digit of the integer in English*/

#include <stdio.h>

int main (void)
{
    int number, tmpNumber, numberOfDigits, right_digit;

    printf("Type a number. \n");
    scanf("%i", &number);

    if (number == 0)
        {
        printf("zero\n");
        return 0;
        }

    tmpNumber = number;
    numberOfDigits = 0;

    while (tmpNumber != 0)
        {
            tmpNumber = tmpNumber / 10;
            numberOfDigits++;
        }

    tmpNumber = number;
    number = 0;

    do
        {
        right_digit = tmpNumber % 10;
        number = number * 10 + right_digit;
        tmpNumber = tmpNumber / 10;
        }
    while (tmpNumber != 0);

    while (number != 0)
    {
        switch(number % 10)
        {
        case 0 :
            number = number/10;
            printf("zero ");
            break;
        case 1 :
            number = number/10;
            printf("one ");
            break;
        case 2 :
            number = number/10;
            printf("two ");
            break;
        case 3 :
            number = number/10;
            printf("three ");
            break;
        case 4 :
            number = number/10;
            printf("four ");
            break;
        case 5 :
            number = number/10;
            printf("five ");
            break;
        case 6 :
            number = number/10;
            printf("six ");
            break;
        case 7 :
            number = number/10;
            printf("seven ");
            break;
        case 8 :
            number = number/10;
            printf("eight ");
            break;
        case 9 :
            number = number/10;
            printf("nine ");
            break;
        default:
            break;
        }
    }
    printf("\n");
    return 0;
}