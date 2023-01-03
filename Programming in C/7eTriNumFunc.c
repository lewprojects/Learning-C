//Using nested loops

#include <stdio.h>

int calculateTriangularNumber (int n)

{
    int i, triangularNumber = 0;

    for (i = 1; i <= n; i++)
        triangularNumber += i;

        return triangularNumber;
}

int main (void)
{
    int number;

    printf("What triangular number do you want? ");
    scanf("%i", &number);
    printf("The triangular number of %i is %i\n", number, calculateTriangularNumber(number));

    return 0;

}
