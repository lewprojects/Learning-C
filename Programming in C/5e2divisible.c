//Program to determine if one integer is evenly divisible by another

#include <stdio.h>

int main (void)
{
    int n1, n2, remainder;

    printf("\nARE THEY EVENLY DIVISIBLE?\n");
    printf("Enter two numbers with a space between: ");
    scanf("%i %i", &n1, &n2);

    remainder = n1 % n2;

    if(remainder == 0)
        printf("%i is divisible by %i.\n", n1, n2);
    else
        printf("%i is NOT divisible by %i.\n", n1, n2);

    return 0;
}