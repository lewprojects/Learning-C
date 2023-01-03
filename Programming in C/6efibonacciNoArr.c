//Program to generate the first 15 Fibonacci numbers without using an array

#include <stdio.h>

int main (void)
{
    int i, sum;
    int var1 = 0;
    int var2 = 1;

    //These first 2 by definition
    printf("0 ");

    for(i = 0; i < 14; ++i)
    {
        sum = var1 + var2;
        printf("%i ", sum);
        var2 = var1;
        var1 = sum;
    }

    printf("\n");
    return 0;
}