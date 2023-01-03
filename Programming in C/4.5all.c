//Using nested loops

#include <stdio.h>

int main (void)
{
    int n, number, trianglularNumber, counter, howMany;

    printf("How many triangular #s do you want to calculate? ");
    scanf("%i", &howMany);

    for (counter = 1; counter <= howMany; ++counter)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        trianglularNumber = 0;

        for (n = 1; n <= number; ++n)
            trianglularNumber+= n;

            printf("Triangular number %i is %i\n\n", number, trianglularNumber);
    }   

    return 0;

}
