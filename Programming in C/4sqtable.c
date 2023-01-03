//“Write a program to generate and display a table of n and n2, for integer values of n ranging from 1 to 10. Be certain to print appropriate column headings”

#include <stdio.h>

int main(void)
{
    int n, square;

    printf("  n     n-squared\n");
    printf("------------------\n");

    for (n = 1; n <=10; n++)
    {
        square = n * n;

        printf(" %2i          %i\n", n, square);
    }
    
    printf("\n");

    return 0;
}