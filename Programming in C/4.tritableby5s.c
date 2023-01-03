// “Write a program that generates a table of every fifth triangular number between 5 and 50 triangular numbers using the formula.”

#include <stdio.h>

int main(void)
{
    int n, triangularNumber;

    printf("  n          tri#\n");
    printf("------------------\n");

    for (n = 5; n <=50; n += 5)
    {
        triangularNumber = n * (n + 1) / 2;

        printf(" %2i          %i\n", n, triangularNumber);
    }
    
    printf("\n");

    return 0;
}