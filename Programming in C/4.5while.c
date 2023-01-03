//Using nested loops

#include <stdio.h>

int main (void)
{
    int n, number, trianglularNumber, counter;

    counter = 1;
    
    while ( counter <= 5)
    {
        n = 1;

        printf("What triangular number do you want? ");
        scanf("%i", &number);

        trianglularNumber = 0;
        
        ++counter;

        while (n <= number)
        {
            trianglularNumber+= n;
            n++;
        }

            printf("Triangular number %i is %i\n\n", number, trianglularNumber);
    }   

    return 0;

}
